@class NSString, NSDictionary;

@interface ASPerAccountPolicyData : NSObject {
    NSString *_accountPersistentUUID;
}

@property (readonly, nonatomic) NSString *policyKey;
@property (readonly, nonatomic) NSDictionary *policyValues;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAccountPersistentUUID:(id)a0;
- (void)setPolicyKey:(id)a0 policyValues:(id)a1;

@end
