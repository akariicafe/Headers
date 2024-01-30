@class NSMutableDictionary, HDProfile, NSMutableSet, HDAppAssertionManager, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HDAppAssertion : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) HDAppAssertionManager *assertionManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *pendingLaunchCompletions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *processDeathSource;
@property (readonly, nonatomic) NSMutableSet *processAssertions;
@property (nonatomic) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *pendingDataTypeCodesToAnchors;
@property (readonly, nonatomic) double lastLaunchAttempt;
@property (readonly, nonatomic) double nextLaunchAttempt;
@property (readonly, nonatomic) long long launchErrorCount;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)_queue_invalidate;
- (BOOL)isEqual:(id)a0;
- (id)launchBundleIdentifier;
- (void)_queue_acquireAssertionWithCompletion:(id /* block */)a0;
- (id)initWithBundleIdentifier:(id)a0 assertionManager:(id)a1 profile:(id)a2 queue:(id)a3;
- (void)launchWithCompletion:(id /* block */)a0;
- (void)extendForDataType:(long long)a0 anchor:(id)a1 completion:(id /* block */)a2;
- (void)invalidateForDataType:(long long)a0 anchor:(id)a1;

@end
