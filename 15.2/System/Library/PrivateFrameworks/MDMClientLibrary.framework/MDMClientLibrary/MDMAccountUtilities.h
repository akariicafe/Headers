@interface MDMAccountUtilities : NSObject

+ (id)rmAccountWithIdentifier:(id)a0 fromStore:(id)a1 error:(id *)a2;
+ (id)_createMissingBearerTokenError;
+ (id)_createMissingRMAccountError;
+ (void)stashMAIDShortLivedTokenWithAccount:(id)a0 authenticationResults:(id)a1;
+ (void)removeMAIDShortLivedTokenWithAccount:(id)a0;
+ (id)maidPropertiesForRMAccountID:(id)a0;
+ (id)_shortLivedTokenFromRMAccount:(id)a0 inStore:(id)a1;
+ (id)_longLivedTokenFromRMAccount:(id)a0 inStore:(id)a1;
+ (id)authenticatorForRMAccountID:(id)a0;
+ (id)bearerTokenForRMAccountID:(id)a0 error:(id *)a1;
+ (BOOL)updateOrganizationName:(id)a0 rmAccountIdentifier:(id)a1 personaID:(id)a2 error:(id *)a3;

@end
