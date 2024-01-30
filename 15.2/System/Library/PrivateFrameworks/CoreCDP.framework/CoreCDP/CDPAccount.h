@interface CDPAccount : NSObject

+ (id)sharedInstance;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

- (id)primaryAccountStashedPRK;
- (id)authToken;
- (id)primaryAccountFirstName;
- (id)primaryAccountDSID;
- (id)primaryAppleAccount;
- (id)primaryAccountAltDSID;
- (id)contextForPrimaryAccount;
- (id)iCloudEnv;
- (id)primaryAccountFullName;
- (id)primaryAccountUsername;
- (unsigned long long)primaryAccountSecurityLevel;
- (BOOL)primaryAccountIsBeneficiary;
- (id)escrowURL;

@end
