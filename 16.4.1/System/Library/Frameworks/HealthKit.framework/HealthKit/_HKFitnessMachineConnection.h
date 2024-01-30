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

- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (void)end;
- (id)exportedInterface;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)markClientReady;
- (void)_registerClient;
- (void)_clientQueue_deliverFailedWithError:(id)a0;
- (void)_connectionInterruptedWithError:(id)a0;
- (void)_simulateDisconnect;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)a0 fromState:(unsigned long long)a1 fitnessMachineSessionUUID:(id)a2 error:(id)a3;
- (void)clientRemote_deliverDetectedNFC:(id)a0;
- (void)clientRemote_deliverFailedWithError:(id)a0;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)a0 fromState:(unsigned long long)a1 fitnessMachineSessionUUID:(id)a2 date:(id)a3;
- (void)clientRemote_deliverMachineInformationUpdated:(id)a0;
- (id)currentSessionConfiguration;
- (void)endWithFitnessMachineSessionUUID:(id)a0;

@end
