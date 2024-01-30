@class STCoreUser, NSString, NSDate;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (retain, nonatomic) STCoreUser *user;
@property (copy, nonatomic) NSString *passcode;
@property (nonatomic) BOOL allLimitsEnabled;
@property (nonatomic) long long communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState;
@property (nonatomic) BOOL needsToSetPasscode;
@property (nonatomic) BOOL isCommunicationSafetySendingRestricted;
@property (nonatomic) BOOL isCommunicationSafetyReceivingRestricted;
@property (nonatomic) BOOL isCommunicationSafetyNotificationEnabled;
@property (nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled;
@property (copy, nonatomic) NSDate *modificationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)a0;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;

- (void)setCommunicationWhileLimitedPolicy:(long long)a0;
- (void)setContactManagementState:(long long)a0;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;
- (id)redactedDescription;
- (id)dictionaryRepresentation;
- (void)setIsCommunicationSafetyNotificationEnabled:(BOOL)a0;
- (void)setIsCommunicationSafetyReceivingRestricted:(BOOL)a0;
- (void)setCommunicationPolicy:(long long)a0;
- (void)setIsCommunicationSafetyAnalyticsEnabled:(BOOL)a0;
- (void)setIsCommunicationSafetySendingRestricted:(BOOL)a0;
- (void)_changeAppLimitsFromAskToWarn:(id)a0;

@end
