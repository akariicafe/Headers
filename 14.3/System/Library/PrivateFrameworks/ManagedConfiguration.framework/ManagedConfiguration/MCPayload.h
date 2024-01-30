@class NSString, NSDictionary, MCProfile, NSArray;

@interface MCPayload : NSObject

@property (readonly, weak, nonatomic) MCProfile *profile;
@property (readonly, retain, nonatomic) NSString *friendlyName;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, retain, nonatomic) NSString *payloadDescription;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSString *organization;
@property (readonly, retain, nonatomic) NSString *UUID;
@property (readonly, nonatomic) long long version;
@property (retain, nonatomic) NSString *persistentResourceID;
@property (readonly, nonatomic) NSDictionary *restrictions;
@property (nonatomic) BOOL mustInstallNonInteractively;
@property (readonly, nonatomic) BOOL containsSensitiveUserInformation;
@property (readonly, retain, nonatomic) NSArray *installationWarnings;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)payloadsFromArray:(id)a0 isStub:(BOOL)a1 profile:(id)a2 outError:(id *)a3;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)a0;
+ (id)badFieldValueErrorWithField:(id)a0 underlyingError:(id)a1;
+ (id)missingFieldErrorWithField:(id)a0 underlyingError:(id)a1;
+ (id)badFieldValueErrorWithField:(id)a0;
+ (id)conflictingFieldValueErrorWithUnderlyingError:(id)a0;
+ (id)_sharedHomePodPayloadClasses;
+ (id)_sharedWatchPayloadClasses;
+ (id)_minimumWatchVersionRequirementsForPayloads;
+ (id)installableHomePodConfigurationPayloadClasses;
+ (id)remoteQueueableHomePodPayloadClasses;
+ (id)installableWatchConfigurationPayloadClasses;
+ (id)remoteQueueableWatchPayloadClasses;
+ (id)wrapperPayloadDictionary;
+ (id)badFieldTypeErrorWithField:(id)a0;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)a0;
+ (id)unavailableSystemPayloadsInEphemeralMultiUser;
+ (id)cellularRequiredPayloads;
+ (id)unavailableUserPayloadsInEphemeralMultiUser;
+ (id)payloadFromDictionary:(id)a0 isStub:(BOOL)a1 profile:(id)a2 outError:(id *)a3;
+ (id)availablePayloadsForUserEnrollment;
+ (id)unavailablePayloadsInEphemeralMultiUser;
+ (id)mdmAdoptablePayloads;
+ (id)supervisedRequiredPayloads;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)malformedPayloadErrorWithError:(id)a0;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)filterForUserEnrollmentOutError:(id *)a0;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (BOOL)isSupportedByWatchVersions:(id)a0;
- (id)description;
- (id)serializedDictionary;
- (id)title;

@end
