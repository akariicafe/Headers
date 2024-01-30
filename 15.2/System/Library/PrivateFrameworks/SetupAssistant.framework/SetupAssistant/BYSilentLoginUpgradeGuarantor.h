@class NSObject;
@protocol OS_dispatch_queue;

@interface BYSilentLoginUpgradeGuarantor : NSObject

@property (nonatomic) BOOL didEnsureQueuesAndStartSilentLoginUpgrade;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *silentLoginUpgradeCompletionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *shortLivedTokenUpgradeCompletionQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_ensureQueuesAndStartSilentLoginUpgrade;
- (void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
- (void)didShortCircuitSilentLoginUpgrade;
- (void)didShortCircuitShortLivedTokenUpgrade;
- (void)blockUntilSilentLoginUpgradeCompletes;
- (void)blockUntilShortLivedTokenUpgradeCompletes;

@end
