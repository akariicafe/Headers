@class HDProfile, NSDate, NSObject, HDFitnessMachineDataProducer, NSMutableArray, HDFitnessMachineDataCollector, NSString, HDFitnessMachineAnalyticsCollector, HDFitnessMachinePairingManager, HKSynchronousObserverSet, HDHealthServiceManager, HDFitnessMachineStateTimers, HDFitnessMachineSession;
@protocol HDFitnessMachineConnectionInitiatorProtocol, OS_dispatch_queue, HDMetricsCollector;

@interface HDFitnessMachineManager : NSObject <HDFitnessMachinePairingManagerDelegate, HDFitnessMachineStateTimersDelegate> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    HDFitnessMachineDataCollector *_collector;
    HDFitnessMachinePairingManager *_pairingManager;
    HDFitnessMachineSession *_fitnessMachineSession;
    BOOL _shouldReconnect;
    BOOL _resetInProgress;
    NSMutableArray *_characteristicDataBuffer;
    HKSynchronousObserverSet *_fitnessMachineSessionObservers;
    HDHealthServiceManager *_serviceManager;
    HDFitnessMachineStateTimers *_fitnessMachineStateTimers;
    HDFitnessMachineAnalyticsCollector *_analyticsCollector;
}

@property (readonly, nonatomic) HDFitnessMachineDataProducer *fitnessMachineDataProducer;
@property (readonly, nonatomic) NSDate *machinePreferredUntilDate;
@property (readonly, nonatomic) id<HDFitnessMachineConnectionInitiatorProtocol> connectionInitiatorServer;
@property (readonly, nonatomic) id<HDMetricsCollector> metricsCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)_setQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_queue_registerClient:(id)a0 withConnectionUUID:(id)a1;
- (void)_queue_handleReceivedCharacteristic:(id)a0 device:(id)a1 error:(id)a2;
- (void)_queue_handleBeginPairing:(id)a0;
- (void)pairingManagerWillBeginPairing:(id)a0 fitnessMachineToken:(id)a1;
- (void)pairingManager:(id)a0 failedPairingWithError:(id)a1;
- (void)pairingManager:(id)a0 didChangeNFCEnabledState:(BOOL)a1;
- (id)pairingManagerRequestsOOBData:(id)a0 error:(id *)a1;
- (void)pairingManagerUpdatedMachineInformation:(id)a0;
- (void)pairingManager:(id)a0 updatedConnectionStateFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (void)pairingManagerReceivedActivityTypeAndPermission:(id)a0;
- (void)pairingManager:(id)a0 discoveredHealthService:(id)a1 machineType:(unsigned long long)a2;
- (void)pairingManagerReadyToConnect:(id)a0;
- (void)pairingManagerDidBeginPairing:(id)a0;
- (void)stateTimersWaitForMachineStartTimeout:(id)a0;
- (void)stateTimersPauseTimeout:(id)a0;
- (void)stateTimersDisconnectTimeout:(id)a0;
- (void)stateTimersRetryConnectionTimeout:(id)a0;
- (void)stateTimersMfaTimeout:(id)a0;
- (void)registerClient:(id)a0 withConnectionUUID:(id)a1;
- (void)markClientReadyWithConnectionUUID:(id)a0;
- (void)endFitnessMachineConnectionWithUUID:(id)a0;
- (void)endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)a0 withConnectionUUID:(id)a1;
- (void)endFitnessMachineSessionWithUUID:(id)a0;
- (void)clientInvalidatedWithConnectionUUID:(id)a0;
- (unsigned long long)fitnessMachineTypeForSessionUUID:(id)a0;
- (id)currentSessionRecoveryConfiguration;
- (void)recoverSessionWithConfiguration:(id)a0;
- (void)finishSessionWithConfiguration:(id)a0;
- (void)addFitnessMachineSessionObserver:(id)a0;
- (void)removeFitnessMachineSessionObserver:(id)a0;
- (void)simulateDisconnect;
- (void)hktest_setMachinePreferredUntilDate:(id)a0;
- (void)unitTest_fakeMachineDiscoveryForType:(unsigned long long)a0;
- (void)unitTest_fakeSession:(id)a0;
- (id)unitTest_currentFitnessMachineSession;
- (void)unitTest_receiveFakeCharacteristicUpdate:(id)a0;

@end
