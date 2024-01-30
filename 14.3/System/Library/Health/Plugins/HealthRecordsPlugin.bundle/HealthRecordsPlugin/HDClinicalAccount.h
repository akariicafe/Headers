@class HDFHIRCredential, NSUUID, HDClinicalGateway, NSString, NSDate, HKClinicalAccount, NSNumber;

@interface HDClinicalAccount : NSObject <NSCopying>

@property (readonly, copy, nonatomic) HKClinicalAccount *hkAccount;
@property (readonly, nonatomic) long long hkState;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic, getter=isUserEnabled) BOOL userEnabled;
@property (readonly, nonatomic) long long credentialState;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *lastFetchDate;
@property (readonly, copy, nonatomic) NSDate *lastFullFetchDate;
@property (readonly, copy, nonatomic) NSNumber *lastExtractedRowID;
@property (readonly, copy, nonatomic) NSNumber *lastSubmittedRowID;
@property (readonly, copy, nonatomic) NSNumber *lastExtractedRulesVersion;
@property (readonly, nonatomic) BOOL needsRelogin;
@property (readonly, nonatomic) BOOL needsScopeUpgrade;
@property (readonly, copy, nonatomic) HDFHIRCredential *credential;
@property (readonly, copy, nonatomic) HDClinicalGateway *gateway;
@property (copy, nonatomic) NSString *patientHash;

+ (void)unitTesting_setExhibitUpdatedIngestTriggerBehavior:(BOOL)a0;
+ (void)unitTesting_resetExhibitUpdatedIngestTriggerBehavior;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)shouldPerformBackgroundFetchWithFrequency:(long long)a0 nowDate:(id)a1;
- (BOOL)shouldPerformFetchWithNowDate:(id)a0;
- (id)initWithIdentifier:(id)a0 userEnabled:(BOOL)a1 credentialState:(long long)a2 creationDate:(id)a3 lastFetchDate:(id)a4 lastFullFetchDate:(id)a5 lastExtractedRowID:(id)a6 lastSubmittedRowID:(id)a7 lastExtractedRulesVersion:(id)a8 credential:(id)a9 gateway:(id)a10;
- (BOOL)exhibitUpdatedIngestTriggerBehavior;
- (BOOL)shouldPerformFullFetchWithNowDate:(id)a0;
- (double)_secondsFetchIsBlocked;
- (double)_secondsFullFetchIsBlocked;
- (id)_minuteOverrideForUserDefaultsKey:(id)a0;
- (BOOL)currentCredentialHasOutdatedScopes;
- (id)currentCredentialScopesWithError:(id *)a0;

@end
