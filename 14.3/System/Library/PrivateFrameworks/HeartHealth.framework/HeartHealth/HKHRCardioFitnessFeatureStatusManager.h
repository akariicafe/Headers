@class NSString, HKObserverSet, HKTaskServerProxyProvider;

@interface HKHRCardioFitnessFeatureStatusManager : NSObject <HKHRCardioFitnessFeatureStatusManagerClient, _HKXPCExportable> {
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void)setNotificationsEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)addObserver:(id)a0 queue:(id)a1;
- (id)initWithHealthStore:(id)a0;
- (void)client_didUpdateOnboardingStatus:(id)a0;
- (void)client_didUpdateNotificationStatus:(id)a0;
- (id)onboardingStatusWithError:(id *)a0;
- (void)resetOnboarding;
- (id)notificationStatusWithError:(id *)a0;

@end
