@interface AKAuthorizationValidator : NSObject

+ (BOOL)canPerformPasswordRequest:(id)a0 error:(id *)a1;
+ (BOOL)canPerformAuthorizationRequest:(id)a0 error:(id *)a1;
+ (BOOL)_requirePasscodeSet;
+ (BOOL)canPerformCredentialRequest:(id)a0 error:(id *)a1;
+ (BOOL)shouldContinueWithResponse:(id)a0 error:(id *)a1;

@end
