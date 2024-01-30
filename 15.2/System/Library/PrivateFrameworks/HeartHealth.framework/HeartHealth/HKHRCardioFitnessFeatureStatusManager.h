@class NSString, HKObserverSet, HKProxyProvider;

@interface HKHRCardioFitnessFeatureStatusManager : NSObject <HKHRCardioFitnessFeatureStatusManagerClient, _HKXPCExportable> {
    HKObserverSet *_observers;
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (BOOL)_synchronouslyStartObservingWithError:(id *)a0;
- (void)resetOnboarding;
- (void)connectionInvalidated;
- (void)addObserver:(id)a0 queue:(id)a1;
- (id)notificationStatusWithError:(id *)a0;
- (void)setNotificationsEnabled:(BOOL)a0;
- (void)_handleAutomaticProxyReconnection;
- (void)client_didUpdateOnboardingStatus:(id)a0;
- (void)removeObserver:(id)a0;
- (id)remoteInterface;
- (void)client_didUpdateNotificationStatus:(id)a0;
- (void).cxx_destruct;
- (id)onboardingStatusWithError:(id *)a0;
- (id)initWithProxyProvider:(id)a0;
- (id)exportedInterface;

@end
