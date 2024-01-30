@class NSSet, ACAccount;

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (copy, nonatomic) NSSet *privacyIdentifiers;
@property (retain, nonatomic) ACAccount *account;

+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)a0;
+ (id)_multiplexPrivacyIdentifier:(id)a0 contentVersion:(unsigned long long)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;
+ (id)_storePrivacyIdentifiers;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (id)_accountStoreForPrivacyIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)rejectPrivacy;
- (id)initWithPrivacyIdentifier:(id)a0 account:(id)a1;
- (id)initWithPrivacyIdentifiers:(id)a0 account:(id)a1;
- (id)_updatePrivacyWithAcknowledgementVersions:(id)a0;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)initWithPrivacyIdentifiers:(id)a0;

@end
