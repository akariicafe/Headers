@class NSDate;

@interface CDPAccount : NSObject

@property (retain, nonatomic) NSDate *rpdProbationFirstSeenDate;

+ (id)sharedInstance;
+ (BOOL)checkIfAltDSIDIsBeneficiary:(id)a0;
+ (id)contextForAccountWithAltDSID:(id)a0;
+ (BOOL)isHSA2Enabled:(id)a0;
+ (id)personIDForAltDSID:(id)a0;
+ (id)cdpContextForUsername:(id)a0;
+ (id)appleAccountForAltDSID:(id)a0;
+ (id)altDSIDForPersonID:(id)a0;
+ (id)_authKitAccountWith:(id)a0;
+ (BOOL)isICDPEnabledForDSID:(id)a0;
+ (BOOL)saveVerifiedAccount:(id)a0 error:(id *)a1;
+ (BOOL)isICDPEnabledForDSID:(id)a0 checkWithServer:(BOOL)a1;

- (id)authToken;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountDSID;
- (id)iCloudEnv;
- (BOOL)primaryAccountNeedsEscrowRecordRepair;
- (BOOL)primaryAccountIsBeneficiary;
- (BOOL)isOTEnabledForContext:(id)a0;
- (id)contextForPrimaryAccount;
- (id)primaryAuthKitAccount;
- (id)primaryAccountFullName;
- (id)primaryAccountUsername;
- (BOOL)rpdProbationIsInEffectForDuration:(double)a0;
- (id)escrowURL;
- (id)primaryAppleAccount;
- (id)primaryAccountStashedPRK;
- (id)primaryAccountFirstName;
- (id)primaryAccountAltDSID;
- (id)_serverFriendlyDateFormatter;

@end
