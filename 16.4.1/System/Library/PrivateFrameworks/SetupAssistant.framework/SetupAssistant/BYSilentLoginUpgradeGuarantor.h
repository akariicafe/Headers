@class NSObject;
@protocol OS_dispatch_queue;

@interface BYSilentLoginUpgradeGuarantor : NSObject

@property (nonatomic) BOOL didEnsureQueuesAndStartSilentLoginUpgrade;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *silentLoginUpgradeCompletionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *shortLivedTokenUpgradeCompletionQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_ensureQueuesAndStartSilentLoginUpgrade;
- (void)blockUntilShortLivedTokenUpgradeCompletes;
- (void)blockUntilSilentLoginUpgradeCompletes;
- (void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
- (void)didShortCircuitShortLivedTokenUpgrade;
- (void)didShortCircuitSilentLoginUpgrade;

@end
