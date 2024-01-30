@interface WBSPasswordRule : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id value;

+ (id)ruleWithType:(long long)a0 value:(id)a1;

- (void).cxx_destruct;
- (id)initWithPasswordRuleType:(long long)a0 value:(id)a1;

@end
