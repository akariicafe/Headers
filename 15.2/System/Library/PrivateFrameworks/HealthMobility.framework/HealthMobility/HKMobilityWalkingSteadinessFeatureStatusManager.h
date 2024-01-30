@class NSString, HKObserverSet, HKTaskServerProxyProvider;

@interface HKMobilityWalkingSteadinessFeatureStatusManager : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerClient, _HKXPCExportable> {
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    long long _onboardingState;
    long long _notificationState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)resetOnboarding;
- (void)connectionInvalidated;
- (void)addObserver:(id)a0 queue:(id)a1;
- (id)notificationStatusWithError:(id *)a0;
- (void)setNotificationsEnabled:(BOOL)a0;
- (void)client_didUpdateOnboardingStatus:(id)a0;
- (void)removeObserver:(id)a0;
- (id)remoteInterface;
- (BOOL)isFitnessTrackingEnabled;
- (void)client_didUpdateNotificationStatus:(id)a0;
- (void).cxx_destruct;
- (id)onboardingStatusWithError:(id *)a0;
- (id)exportedInterface;
- (void)client_didUpdateFitnessTrackingEnabled:(BOOL)a0;

@end
