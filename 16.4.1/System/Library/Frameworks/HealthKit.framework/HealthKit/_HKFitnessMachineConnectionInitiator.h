@class NSUUID, NSString, HKTaskServerProxyProvider;
@protocol _HKFitnessMachineConnectionInitiatorDelegate;

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable> {
    _Atomic BOOL _requiresRegistration;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (weak, nonatomic) id<_HKFitnessMachineConnectionInitiatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)_simulateAccept;
- (void)_fetchProxyWithHandler:(id /* block */)a0;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)a0;
- (void)clientRemote_encounteredError:(id)a0;
- (void)clientRemote_updatedConnectionState:(unsigned long long)a0 fitnessMachineSessionUUID:(id)a1;
- (void)clientRemote_updatedFitnessMachine:(id)a0 fitnessMachineSessionUUID:(id)a1;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)a0 fitnessMachineSessionUUID:(id)a1;
- (void)clientRemote_workoutAppReady;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)a0;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)a0 activityType:(unsigned long long)a1;
- (void)registerClientIfNeeded;

@end
