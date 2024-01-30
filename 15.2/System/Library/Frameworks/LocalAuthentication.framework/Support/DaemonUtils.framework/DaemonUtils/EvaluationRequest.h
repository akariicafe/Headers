@class NSData, NSDictionary;

@interface EvaluationRequest : Request

@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) id aclOperation;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) long long purpose;
@property (readonly, nonatomic) BOOL isApplePay;
@property (readonly, nonatomic) BOOL isUnlock;
@property (readonly, nonatomic) BOOL isInAppPayment;
@property (nonatomic) BOOL secureIntentRequested;

+ (BOOL)isApplePayPolicy:(long long)a0;

- (BOOL)interactive;
- (id)initWithAcl:(id)a0 operation:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (void)updateOptions:(id)a0;
- (id)initWithPolicy:(long long)a0 options:(id)a1;

@end
