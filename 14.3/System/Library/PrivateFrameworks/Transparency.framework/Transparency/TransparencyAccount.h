@interface TransparencyAccount : NSObject

+ (id)sharedAccountStore;
+ (id)primaryAccount:(id *)a0;
+ (unsigned long long)accountLevel:(id)a0;
+ (long long)accountLevelErrorCodeForLevel:(id)a0;
+ (id)createAuthToken:(id)a0 authToken:(id)a1;
+ (id)createAuthkitSession;
+ (id)authToken:(id *)a0;
+ (BOOL)eligibleForSelfVerify;
+ (BOOL)eligibleForPeerVerify;
+ (BOOL)eligibleForEnrollmentVerify;
+ (BOOL)initiateCredentialRenewal:(id *)a0 completionHandler:(id /* block */)a1;

@end
