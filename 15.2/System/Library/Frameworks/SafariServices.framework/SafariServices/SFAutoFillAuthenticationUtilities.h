@interface SFAutoFillAuthenticationUtilities : NSObject

+ (id)customAuthenticationTitleForLoggingInWithSavedPasswordOnWebsite:(id)a0;
+ (id)customAuthenticationTitleForFillingSavedPassword;
+ (id)customAuthenticationTitleForFillingTimeBasedOneTimeCode;
+ (id)customAuthenticationTitleForFillingCreditCard;
+ (id)passcodePromptForLoggingInWithSavedPasswordOnWebsite:(id)a0;
+ (id)passcodePromptForFillingSavedPassword;
+ (id)passcodePromptForFillingTimeBasedOneTimeCode;
+ (id)passcodePromptForFillingCreditCard;
+ (id)passcodePromptForViewingSavedPasswords;
+ (id)customAuthenticationTitleForViewingSavedPasswords;

@end
