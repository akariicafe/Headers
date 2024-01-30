@class NSArray, NSDictionary, NSString, NSNumber;

@interface AAProvisioningResponse : AAAuthenticationResponse {
    NSDictionary *_icloud;
}

@property (readonly, nonatomic) NSArray *provisionedDataclasses;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSNumber *primaryEmailVerified;
@property (readonly, nonatomic) NSString *iCloudAuthToken;
@property (readonly, nonatomic) NSString *fmipAuthToken;
@property (readonly, nonatomic) NSString *fmipSiriToken;
@property (readonly, nonatomic) NSString *searchPartyToken;
@property (readonly, nonatomic) NSString *keyTransparencyToken;
@property (readonly, nonatomic) NSString *fmipAppToken;
@property (readonly, nonatomic) NSDictionary *regionInfo;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, nonatomic, getter=isNotesMigrated) BOOL notesMigrated;
@property (readonly, nonatomic, getter=isRemindersMigrated) BOOL remindersMigrated;
@property (readonly, nonatomic, getter=isRemindersAutoMigratableToCK) BOOL remindersAutoMigratableToCK;
@property (readonly, nonatomic, getter=isSandboxAccount) BOOL sandboxAccount;
@property (readonly, nonatomic, getter=isCloudDocsMigrated) BOOL cloudDocsMigrated;
@property (readonly, nonatomic, getter=hasOptionalTerms) BOOL optionalTerms;
@property (readonly, nonatomic, getter=isFamilyEligible) BOOL familyEligible;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
