@class NSDate, STLocalOrganizationSettings, NSString, STCoreOrganizationSettings, NSSet, STCoreOrganization, STFamilyOrganizationSettings, STiCloudOrganizationSettings, NSNumber, STUserDeviceState;

@interface STCoreUser : NSManagedObject {
    NSString *_familyMemberType;
}

@property (readonly) BOOL screenTimeEnabled;
@property (readonly) BOOL syncingEnabled;
@property (readonly) BOOL allLimitsEnabled;
@property (readonly, copy, nonatomic) NSString *localizedFullName;
@property (readonly) STCoreOrganization *managingOrganization;
@property (readonly) BOOL canSetUpFamily;
@property (readonly, getter=isManaged) BOOL managed;
@property (readonly, getter=isManaging) BOOL managing;
@property (readonly) BOOL shareWebUsage;
@property (readonly, copy) NSString *effectivePasscode;
@property (readonly, copy) NSString *effectiveRecoveryAltDSID;
@property (readonly) BOOL needsToSetPasscode;
@property (readonly) NSString *organizationIdentifier;
@property (readonly) long long communicationPolicy;
@property (readonly) long long communicationWhileLimitedPolicy;
@property (readonly) BOOL contactsEditable;
@property (readonly) BOOL isCommunicationSafetySendingRestricted;
@property (readonly) BOOL isCommunicationSafetyReceivingRestricted;
@property (readonly) BOOL isCommunicationSafetyNotificationEnabled;
@property (readonly) BOOL isCommunicationSafetyAnalyticsEnabled;
@property BOOL screenTimeEnabled;
@property BOOL syncingEnabled;
@property BOOL allLimitsEnabled;
@property BOOL shareWebUsage;
@property (copy) NSString *effectivePasscode;
@property (copy) NSString *effectiveRecoveryAltDSID;
@property (nonatomic) long long communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState;
@property (nonatomic) BOOL contactsEditable;
@property (readonly) BOOL unmodeledParticipatesInSharedLedger;
@property (readonly) STCoreOrganizationSettings *unmodeledManagingOrganizationSettings;
@property BOOL isCommunicationSafetySendingRestricted;
@property BOOL isCommunicationSafetyReceivingRestricted;
@property BOOL isCommunicationSafetyNotificationEnabled;
@property BOOL isCommunicationSafetyAnalyticsEnabled;
@property (readonly, copy) NSString *alwaysAllowActivationIdentifier;
@property (readonly, copy) NSString *alwaysAllowConfigurationIdentifier;
@property (readonly, copy) NSString *contentPrivacyActivationIdentifier;
@property (readonly, copy) NSString *managedUserActivationIdentifier;
@property (readonly, copy) NSString *iCloudLogoutConfigurationIdentifier;
@property (readonly, copy) NSString *automaticDateTimeConfigurationIdentifier;
@property BOOL observableScreenTimeEnabled;
@property BOOL observableSyncingEnabled;
@property BOOL observableAllLimitsEnabled;
@property (readonly) BOOL observableCanSetUpFamily;
@property BOOL observableShareWebUsage;
@property BOOL observableCommunicationSafetySendingRestricted;
@property BOOL observableCommunicationSafetyReceivingRestricted;
@property BOOL observableCommunicationSafetyNotificationEnabled;
@property BOOL observableCommunicationSafetyAnalyticsEnabled;
@property (readonly, copy, nonatomic) NSString *phoneticGivenName;
@property (readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property (nonatomic) BOOL isFamilyOrganizer;
@property (retain, nonatomic) STLocalOrganizationSettings *localSettings;
@property (retain, nonatomic) STiCloudOrganizationSettings *cloudSettings;
@property (retain, nonatomic) STFamilyOrganizationSettings *familySettings;
@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (copy, nonatomic) NSNumber *dsid;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (copy, nonatomic) NSString *familyMemberType;
@property (nonatomic) BOOL isParent;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (retain, nonatomic) NSSet *userDeviceStates;
@property (retain, nonatomic) NSSet *usages;
@property (nonatomic) long long passcodeEntryAttemptCount;
@property (copy, nonatomic) NSDate *passcodeEntryTimeoutEndDate;
@property (nonatomic) long long passcodeRecoveryAttemptCount;
@property (nonatomic) BOOL supportsEncryption;
@property (copy, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSSet *blueprints;

+ (id)fetchLocalUserInContext:(id)a0 error:(id *)a1;
+ (id)fetchUserWithAppleID:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)keyPathsForValuesAffectingCommunicationPolicy;
+ (id)keyPathsForValuesAffectingShareWebUsage;
+ (id)keyPathsForValuesAffectingObservableCommunicationSafetySendingRestricted;
+ (id)keyPathsForValuesAffectingNeedsToSetPasscode;
+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)keyPathsForValuesAffectingSyncingEnabled;
+ (id)keyPathsForValuesAffectingObservableShareWebUsage;
+ (id)keyPathsForValuesAffectingEffectiveRecoveryAltDSID;
+ (id)fetchRequestForUsersWithDSID:(id)a0;
+ (id)keyPathsForValuesAffectingObservableScreenTimeEnabled;
+ (id)fetchRequestMatchingLocalUser;
+ (id)keyPathsForValuesAffectingObservableAllLimitsEnabled;
+ (id)keyPathsForValuesAffectingEffectivePasscode;
+ (id)keyPathsForValuesAffectingManaged;
+ (id)fetchRequestForFamilyMembers;
+ (id)keyPathsForValuesAffectingIsCommunicationSafetySendingRestricted;
+ (id)keyPathsForValuesAffectingObservableSyncingEnabled;
+ (id)fetchRequestMatchingAppleID:(id)a0;
+ (id)keyPathsForValuesAffectingObservableCanSetUpFamily;
+ (id)keyPathsForValuesAffectingObservableCommunicationSafetyNotificationEnabled;
+ (id)keyPathsForValuesAffectingIsCommunicationSafetyNotificationEnabled;
+ (id)keyPathsForValuesAffectingAllLimitsEnabled;
+ (id)keyPathsForValuesAffectingLocalizedFullName;
+ (id)keyPathsForValuesAffectingObservableCommunicationSafetyReceivingRestricted;
+ (id)keyPathsForValuesAffectingCommunicationWhileLimitedPolicy;
+ (id)keyPathsForValuesAffectingObservableCommunicationSafetyAnalyticsEnabled;
+ (id)keyPathsForValuesAffectingContactManagementState;
+ (id)fetchUserWithDSID:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)keyPathsForValuesAffectingManaging;
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;
+ (id)keyPathsForValuesAffectingIsCommunicationSafetyAnalyticsEnabled;
+ (id)keyPathsForValuesAffectingIsCommunicationSafetyReceivingRestricted;

- (id)initWithFamilyMemberType:(id)a0 context:(id)a1;
- (id)_contactStoreForUser;
- (void)notifyServerOfScreenTimeEnabled:(BOOL)a0;
- (void)didChangeValueForKey:(id)a0;
- (id)contentPrivacyConfigurationIdentifierForType:(id)a0;
- (id)managingOrganization;
- (id)_primaryContainerInContactStore:(id)a0 withError:(id *)a1;
- (void)updateWithDescription:(id)a0;
- (void)resetPasscode;
- (void).cxx_destruct;

@end
