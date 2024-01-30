@class STCoreUser, NSString;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (retain, nonatomic) STCoreUser *user;
@property (copy, nonatomic) NSString *passcode;
@property (nonatomic) BOOL allLimitsEnabled;
@property (nonatomic) long long communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState;
@property (nonatomic) BOOL needsToSetPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)a0;

- (id)redactedDescription;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (void)_changeAppLimitsFromAskToWarn:(id)a0;

@end
