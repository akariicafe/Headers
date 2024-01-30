@interface WBSPasswordRuleParser : NSObject

+ (id)mergePasswordRuleSet:(id)a0 withPasswordRuleSet:(id)a1;
+ (id)parsePasswordRules:(id)a0 error:(id *)a1;
+ (id)_passwordRuleSetFromPasswordRules:(id)a0;

@end
