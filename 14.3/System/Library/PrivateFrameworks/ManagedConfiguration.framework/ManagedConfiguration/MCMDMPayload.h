@class NSString, NSArray, NSData, NSNumber;

@interface MCMDMPayload : MCPayload

@property (readonly, nonatomic) NSNumber *useDevelopmentAPNSNum;
@property (readonly, nonatomic) NSNumber *signMessageNum;
@property (readonly, nonatomic) NSNumber *checkOutWhenRemovedNum;
@property (readonly, retain, nonatomic) NSString *identityUUID;
@property (retain, nonatomic) NSData *identityPersistentID;
@property (readonly, retain, nonatomic) NSString *topic;
@property (readonly, retain, nonatomic) NSString *serverURLString;
@property (readonly, retain, nonatomic) NSArray *serverPinningUUIDs;
@property (retain, nonatomic) NSArray *serverPinningPersistentRefs;
@property (readonly, nonatomic) BOOL useDevelopmentAPNS;
@property (readonly, retain, nonatomic) NSString *checkInURLString;
@property (readonly, retain, nonatomic) NSArray *checkInPinningUUIDs;
@property (retain, nonatomic) NSArray *checkInPinningPersistentRefs;
@property (readonly, nonatomic) BOOL pinningRevocationCheckRequired;
@property (readonly, nonatomic) int accessRights;
@property (readonly, retain, nonatomic) NSArray *localizedAccessRightDescriptions;
@property (readonly, nonatomic) BOOL signMessage;
@property (readonly, nonatomic) BOOL checkOutWhenRemoved;
@property (readonly, nonatomic) NSArray *serverCapabilities;
@property (readonly, retain, nonatomic) NSString *managedAppleID;
@property (readonly, retain, nonatomic) NSString *managedAppleIDName;
@property (readonly, nonatomic) BOOL isUserEnrollment;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *enrollmentID;
@property (retain, nonatomic) NSString *iCloudEnrollmentID;
@property (retain, nonatomic) NSString *easEnrollmentID;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)a0;
- (id)kvsForCertUUIDs:(id)a0 persistentRefs:(id)a1 labelKey:(id)a2;

@end
