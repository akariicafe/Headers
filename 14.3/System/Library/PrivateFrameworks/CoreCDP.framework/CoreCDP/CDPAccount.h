@interface CDPAccount : NSObject

+ (id)sharedInstance;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;
+ (BOOL)isICDPEnabledForDSID:(id)a0;

- (id)primaryAccountUsername;
- (id)authToken;
- (id)primaryAccountDSID;
- (id)escrowURL;
- (id)primaryAccountAltDSID;
- (id)primaryAccountFirstName;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)iCloudEnv;
- (id)primaryAppleAccount;
- (id)sharedAccountStore;
- (id)primaryAccountStashedPRK;
- (id)contextForPrimaryAccount;

@end
