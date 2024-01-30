@class CerKRQOmMu7LBUoc, ACAccount;
@protocol AMSBagProtocol;

@interface AMSGenerateFraudScoreTask : AMSTask

@property (retain, nonatomic) CerKRQOmMu7LBUoc *scorer;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;

+ (id)_fraudScoreCache;
+ (id)_fraudScoreCacheAccessQueue;
+ (id)cachedFraudScoreForPurchaseInfo:(id)a0;
+ (void)cacheFraudScore:(id)a0 forPurchaseInfo:(id)a1;
+ (id)_serverEndpointIdentifierForFraudScoreAction:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)runTask;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)_createScorerWithError:(id *)a0;
- (id)initWithAction:(unsigned long long)a0 account:(id)a1 bag:(id)a2;
- (id)_generateFraudScore;
- (BOOL)_deviceSupportsFraudScores;

@end
