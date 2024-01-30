@interface TransparencyAccount : NSObject

+ (id)sharedAccountStore;
+ (long long)accountLevelErrorCodeForLevel:(id)a0;
+ (id)primaryAccount:(id *)a0;
+ (id)authToken:(id *)a0;
+ (BOOL)initiateCredentialRenewal:(id *)a0 completionHandler:(id /* block */)a1;
+ (unsigned long long)accountLevel:(id)a0;
+ (id)createAuthToken:(id)a0 authToken:(id)a1;
+ (id)createAuthkitSession;

@end
