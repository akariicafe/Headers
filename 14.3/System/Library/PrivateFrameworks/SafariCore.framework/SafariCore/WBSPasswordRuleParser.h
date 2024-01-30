@interface WBSPasswordRuleParser : NSObject

+ (id)_passwordRuleSetFromPasswordRules:(id)a0;
+ (id)parsePasswordRules:(id)a0 error:(id *)a1;
+ (id)mergePasswordRuleSet:(id)a0 withPasswordRuleSet:(id)a1;

@end
