@class PKPaymentPass, NSURL, PKPassUpgradeRequest, NSMutableArray;

@interface PKPendingPassUpgrade : NSObject

@property (readonly, nonatomic) PKPassUpgradeRequest *upgradeRequest;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic) BOOL webRequestFinished;
@property (nonatomic) BOOL requiresAppletUpgrade;
@property (nonatomic) BOOL appletDidUpgrade;
@property (retain, nonatomic) PKPaymentPass *upgradedPass;
@property (copy, nonatomic) NSURL *upgradePassURL;
@property (nonatomic) BOOL passUpgradeInProgress;
@property (readonly, nonatomic) BOOL upgradeIsComplete;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
