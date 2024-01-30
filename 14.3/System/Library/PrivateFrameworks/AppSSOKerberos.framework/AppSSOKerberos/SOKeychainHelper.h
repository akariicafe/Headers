@interface SOKeychainHelper : NSObject

+ (struct __SecIdentity { } *)identityForUUIDString:(id)a0;
+ (int)addCredentialsToKeychainWithService:(id)a0 withUsername:(id)a1 withPassword:(id)a2 requireUserPresence:(BOOL)a3;
+ (int)retrieveCredentialsFromKeychainWithService:(id)a0 returnedUsername:(id *)a1 returnedPassword:(id *)a2;
+ (int)removeCredentialsFromKeychainWithService:(id)a0;

@end
