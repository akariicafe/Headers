@class NSSet, ACAccount;

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (copy, nonatomic) NSSet *privacyIdentifiers;
@property (retain, nonatomic) ACAccount *account;

+ (id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1 minimumVersion:(id)a2;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;
+ (id)_appleMusicAppPrivacyIdenitifier;
+ (id)_accountStoreForPrivacyIdentifier:(id)a0;
+ (id)_storePrivacyIdentifiers;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 minimumVersion:(id)a1;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0;
+ (id)_appleTVAppPrivacyIdenitifier;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
+ (id)_appleArcadePrivacyIdenitifier;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0;
+ (id)_appleIDPrivacyIdenitifier;
+ (id)_multiplexPrivacyIdentifier:(id)a0 contentVersion:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)rejectPrivacy;
- (id)initWithPrivacyIdentifier:(id)a0 account:(id)a1;
- (id)initWithPrivacyIdentifiers:(id)a0 account:(id)a1;
- (id)_updatePrivacyWithAcknowledgementVersions:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifiers:(id)a0;

@end
