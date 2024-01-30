@class NSString, ACAccount, NSNumber;
@protocol AMSBagProtocol;

@interface AMSGenerateFraudScoreTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) BOOL deviceSupportsFraudScores;
@property (readonly, nonatomic) BOOL deviceSupportsFraudScoresV2;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly, nonatomic) NSNumber *purchaseIdentifier;

+ (BOOL)deviceSupportsFraudScoresV2WithBag:(id)a0 logKey:(id)a1;

- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)runTask;
- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)a0 account:(id)a1 purchaseIdentifier:(id)a2 bag:(id)a3 logKey:(id)a4;

@end
