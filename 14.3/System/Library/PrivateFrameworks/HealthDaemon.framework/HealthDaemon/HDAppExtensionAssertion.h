@class NSMutableDictionary, HDProfile, NSString, HDAppAssertionManager, NSObject;
@protocol OS_dispatch_source, HDAppExtensionAssertionDelegate;

@interface HDAppExtensionAssertion : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) HDAppAssertionManager *assertionManager;
@property (retain, nonatomic) NSMutableDictionary *pendingAssertionCompletions;
@property (retain, nonatomic) NSMutableDictionary *pendingDataTypeCodesToAnchors;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *graceTimer;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL pendingAssertion;
@property (readonly, nonatomic) BOOL invalidated;
@property (nonatomic) double lastAssertionAttempt;
@property (nonatomic) long long connectionErrorCount;
@property (weak, nonatomic) id<HDAppExtensionAssertionDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL shouldAssert;
@property (readonly, nonatomic) double nextAssertionAttempt;
@property (copy, nonatomic) id /* block */ unitTest_errorCountDidIncrement;
@property (copy, nonatomic) id /* block */ unitTest_extensionWillTimeout;
@property (nonatomic) BOOL unitTest_timersWithShortTimeout;

- (id)extension;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)extendForDataType:(long long)a0 anchor:(id)a1 completion:(id /* block */)a2;
- (void)invalidateForDataType:(long long)a0 anchor:(id)a1;
- (void)incrementErrorCount;
- (void)_lock_cancelTimeoutTimers;
- (void)_notifyAppExtensionOfUpcomingTimeout;
- (void)_notifyAppExtensionForDataType:(long long)a0;
- (id)initWithBundleIdentifier:(id)a0 assertionManager:(id)a1 profile:(id)a2;
- (void)assertAndUpdateWithCompletion:(id /* block */)a0;
- (unsigned long long)_unitTest_pendingAssertionCompletionsCount;
- (id)_unitTest_pendingDataTypeCodesToAnchors;
- (long long)_unitTest_connectionErrorCount;
- (double)_unitTest_lastAssertionAttempt;
- (BOOL)_unitTest_invalidated;

@end
