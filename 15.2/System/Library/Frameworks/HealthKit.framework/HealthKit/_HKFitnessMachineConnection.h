@class NSUUID, _HKFitnessMachine, HKDevice, NSString, HKTaskServerProxyProvider, NSLock;
@protocol _HKFitnessMachineConnectionDelegate;

@interface _HKFitnessMachineConnection : NSObject <_HKXPCExportable, HKFitnessMachineConnectionClientInterface> {
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_currentSessionUUID;
    _HKFitnessMachine *_fitnessMachine;
    HKDevice *_deviceForFinalWorkout;
    NSLock *_lock;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, copy) _HKFitnessMachine *fitnessMachine;
@property (readonly, nonatomic) unsigned long long machineState;
@property (readonly, nonatomic) unsigned long long connectionState;
@property (weak, nonatomic) id<_HKFitnessMachineConnectionDelegate> delegate;
@property (readonly, copy) HKDevice *deviceForFinalWorkout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)end;
- (id)remoteInterface;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)connectionInterrupted;
- (id)_init;
- (id)exportedInterface;
- (void)_registerClient;
- (void)_connectionInterruptedWithError:(id)a0;
- (void)clientRemote_deliverFailedWithError:(id)a0;
- (void)_clientQueue_deliverFailedWithError:(id)a0;
- (void)clientRemote_deliverDetectedNFC:(id)a0;
- (void)markClientReady;
- (void)clientRemote_deliverMachineInformationUpdated:(id)a0;
- (void)endWithFitnessMachineSessionUUID:(id)a0;
- (id)currentSessionConfiguration;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)a0 fromState:(unsigned long long)a1 fitnessMachineSessionUUID:(id)a2 date:(id)a3;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)a0 fromState:(unsigned long long)a1 fitnessMachineSessionUUID:(id)a2 error:(id)a3;
- (void)_simulateDisconnect;

@end
