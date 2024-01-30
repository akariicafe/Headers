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

- (void)end;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)_registerClient;
- (void)_connectionInterruptedWithError:(id)a0;
- (void)clientRemote_deliverFailedWithError:(id)a0;
- (void)_clientQueue_deliverFailedWithError:(id)a0;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)clientRemote_deliverDetectedNFC:(id)a0;
- (void)clientRemote_deliverMachineInformationUpdated:(id)a0;
- (void)markClientReady;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)a0 fromState:(unsigned long long)a1 fitnessMachineSessionUUID:(id)a2 date:(id)a3;
- (id)currentSessionConfiguration;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)a0 fromState:(unsigned long long)a1 fitnessMachineSessionUUID:(id)a2 error:(id)a3;
- (void)_simulateDisconnect;
- (void)endWithFitnessMachineSessionUUID:(id)a0;
- (id)_init;
- (id)exportedInterface;
- (BOOL)isEqual:(id)a0;
- (id)initWithHealthStore:(id)a0;

@end
