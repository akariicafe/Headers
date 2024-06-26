@class NSNumber, NSString, NSUUID, NSData, NSDate, NSMutableArray, NSUserDefaults;

@interface SOKerberosRealmSettings : NSObject

@property (retain, nonatomic) NSMutableArray *siteCodeCache;
@property (retain) NSUserDefaults *defaults;
@property (retain) NSString *realm;
@property (retain, nonatomic) NSString *userPrincipalName;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSUUID *credentialUUID;
@property (retain, nonatomic) NSData *pkinitPersistientRef;
@property (retain, nonatomic) NSString *smartCardTokenID;
@property (retain, nonatomic) NSDate *dateLastLogin;
@property (retain, nonatomic) NSDate *datePasswordLastChanged;
@property (retain, nonatomic) NSDate *datePasswordLastChangedAtLogin;
@property (retain, nonatomic) NSDate *dateNextPacRefresh;
@property (retain, nonatomic) NSDate *dateADPasswordCanChange;
@property (retain, nonatomic) NSDate *datePasswordExpires;
@property (nonatomic) BOOL passwordNeverExpires;
@property (retain, nonatomic) NSString *networkHomeDirectory;
@property (readonly, nonatomic) NSNumber *daysUntilExpiration;
@property (retain, nonatomic) NSDate *dateLocalPasswordLastChanged;
@property (retain, nonatomic) NSDate *dateADPasswordLastChangedWhenSynced;
@property (retain, nonatomic) NSDate *dateLocalPasswordLastChangedWhenSynced;
@property (retain, nonatomic) NSDate *dateExpirationNotificationSent;
@property (retain, nonatomic) NSDate *dateExpirationChecked;
@property (nonatomic) BOOL delayUserSetupCleared;
@property (nonatomic) BOOL networkAvailable;
@property (nonatomic) BOOL userCancelledLogin;
@property (nonatomic) BOOL passwordChangeInProgress;
@property (retain, nonatomic) NSDate *dateUserSignedOut;

- (id)userName;
- (void)save;
- (BOOL)networkAvailable;
- (void)removeAllValues;
- (void)setUserName:(id)a0;
- (void).cxx_destruct;
- (id)credentialUUID;
- (void)setCredentialUUID:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)daysUntilExpiration;
- (id)initWithRealm:(id)a0;
- (id)realmKey:(id)a0;
- (id)datePasswordExpires;
- (void)saveSiteCodes;
- (void)loadSiteCodes;
- (id)userPrincipalName;
- (void)setUserPrincipalName:(id)a0;
- (id)pkinitPersistientRef;
- (void)setPkinitPersistientRef:(id)a0;
- (id)smartCardTokenID;
- (void)setSmartCardTokenID:(id)a0;
- (id)dateLastLogin;
- (void)setDateLastLogin:(id)a0;
- (id)datePasswordLastChanged;
- (void)setDatePasswordLastChanged:(id)a0;
- (id)dateADPasswordCanChange;
- (void)setDateADPasswordCanChange:(id)a0;
- (id)dateLocalPasswordLastChanged;
- (void)setDateLocalPasswordLastChanged:(id)a0;
- (id)dateADPasswordLastChangedWhenSynced;
- (void)setDateADPasswordLastChangedWhenSynced:(id)a0;
- (id)dateLocalPasswordLastChangedWhenSynced;
- (void)setDateLocalPasswordLastChangedWhenSynced:(id)a0;
- (void)setDatePasswordExpires:(id)a0;
- (BOOL)passwordNeverExpires;
- (void)setPasswordNeverExpires:(BOOL)a0;
- (id)dateExpirationNotificationSent;
- (void)setDateExpirationNotificationSent:(id)a0;
- (id)dateExpirationChecked;
- (void)setDateExpirationChecked:(id)a0;
- (id)networkHomeDirectory;
- (void)setNetworkHomeDirectory:(id)a0;
- (BOOL)delayUserSetupCleared;
- (void)setDelayUserSetupCleared:(BOOL)a0;
- (void)setNetworkAvailable:(BOOL)a0;
- (BOOL)userCancelledLogin;
- (void)setUserCancelledLogin:(BOOL)a0;
- (BOOL)passwordChangeInProgress;
- (void)setPasswordChangeInProgress:(BOOL)a0;
- (id)dateUserSignedOut;
- (void)setDateUserSignedOut:(id)a0;
- (id)dumpSiteCodeCache;
- (void)cacheSiteCode:(id)a0;
- (id)siteCodeForNetworkFingerprint:(id)a0;

@end
