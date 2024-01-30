@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PXSystemAuthenticationTypeObserver : PXObservable

@property (class, readonly, nonatomic) PXSystemAuthenticationTypeObserver *sharedObserver;

@property (nonatomic) long long authenticationType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (nonatomic) long long forcedSystemAuthenticationType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)_currentlyAvailableBiometryType;
- (void)_beginObservingApplicationStateChangesAndSystemEvents;
- (long long)_calculateAuthenticationType;
- (void)_stopObservingApplicationStateChanges;
- (void)_updateAuthenticationTypeInBackground;
- (void)updateAuthenticationTypeImmediately;

@end
