@class NSMutableDictionary, HDProfile, NSMutableSet, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDAppAssertionManager : NSObject <HDAppExtensionAssertionDelegate>

@property (retain, nonatomic) NSMutableDictionary *appExtensionAssertions;
@property (retain, nonatomic) NSMutableDictionary *appExtensionRetryTimers;
@property (retain, nonatomic) NSMutableSet *activeExtensionAssertions;
@property (retain, nonatomic) NSMutableArray *pendingExtensionAssertions;
@property (retain, nonatomic) NSMutableSet *activeAssertions;
@property (retain, nonatomic) NSMutableArray *pendingAssertions;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *appAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)invalidateAssertionWithBundleID:(id)a0 dataCode:(long long)a1 anchor:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_considerAssertingAppExtensions;
- (void)extendAssertionWithBundleID:(id)a0 dataCode:(long long)a1 anchor:(id)a2 completion:(id /* block */)a3;
- (void)_queue_considerLaunchingApp;
- (void)_queue_invalidateAssertionWithBundleID:(id)a0 dataCode:(long long)a1 anchor:(id)a2;
- (id)_queue_pendingAssertionsReadyForLaunch;
- (void)appExtensionAssertionDidInvalidate:(id)a0;
- (void)_queue_extendAssertionWithBundleID:(id)a0 dataCode:(long long)a1 anchor:(id)a2 completion:(id /* block */)a3;
- (void)_queue_assertAppExtensionAssertion:(id)a0 currentTime:(double)a1;
- (void)_queue_retryAppLaunchForAssertion:(id)a0;
- (void)_queue_retryAssertingAppExtensionAssertion:(id)a0 currentTime:(double)a1;
- (void)_queue_assertionDidFinish:(id)a0;
- (id)newTimerWithDuration:(long long)a0 handler:(id /* block */)a1;

@end
