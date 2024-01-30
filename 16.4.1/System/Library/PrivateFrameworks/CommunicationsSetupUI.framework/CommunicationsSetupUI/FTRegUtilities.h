@interface FTRegUtilities : NSObject

+ (void)changePasswordControllerDidFinish:(id)a0 withAppleID:(id)a1 authID:(id)a2 authToken:(id)a3;
+ (void)authorizationController:(id)a0 authorizedAccount:(BOOL)a1;
+ (void)changePasswordControllerDidCancel:(id)a0;
+ (id)serviceWithType:(long long)a0;
+ (id)standaloneAuthorizationControllerWithRegController:(id)a0 authID:(id)a1 token:(id)a2;
+ (id)standaloneNewPasswordControllerWithRegController:(id)a0 appleID:(id)a1;

@end
