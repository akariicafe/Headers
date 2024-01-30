@class NSData, NSObject;
@protocol SGEntityKey;

@interface SGDuplicateKey : NSObject <NSCopying>

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) NSObject<SGEntityKey> *entityKey;
@property (readonly, nonatomic) SGDuplicateKey *parentKey;
@property (readonly, nonatomic) NSData *compositeHash;

+ (id)duplicateKeyForMessage:(id)a0 fromSource:(id)a1;
+ (id)duplicateKeyForEmailWithSource:(id)a0 messageId:(id)a1;
+ (id)duplicateKeyForTextMessageWithSource:(id)a0 uniqueIdentifier:(id)a1;
+ (id)duplicateKeyForInteractionWithBundleId:(id)a0 personHandle:(id)a1;
+ (id)duplicateKeyForInteraction:(id)a0 fromBundleIdentifier:(id)a1;
+ (id)duplicateKeyForInteractionIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
+ (id)duplicateKeyForPseudoContactWithIdentity:(id)a0 parentKey:(id)a1;
+ (id)duplicateKeyForCuratedEventWithExternalID:(id)a0;
+ (id)duplicateKeyForPseudoEventWithGroupId:(id)a0 parentKey:(id)a1;
+ (id)duplicateKeyForPseudoReminderWithGroupId:(id)a0 withCreationTime:(struct SGUnixTimestamp_ { double x0; })a1 parentKey:(id)a2;
+ (id)duplicateKeyForDeliveryWithProviderString:(id)a0 trackingNumber:(id)a1 parentKey:(id)a2;
+ (id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)a0 endDate:(id)a1 title:(id)a2 participants:(id)a3 parentKey:(id)a4;
+ (id)duplicateKeyForSearchableItem:(id)a0;
+ (id)duplicateKeyForSchemaOrg;
+ (id)duplicateKeyForWebPageFromSource:(id)a0;

- (id)initWithSerialized:(id)a0;
- (id)serialize;
- (id)contactDetailKey;
- (void).cxx_destruct;
- (id)deliveryKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pseudoContactKey;
- (id)messageKey;
- (id)bundleId;
- (id)initWithSearchableItem:(id)a0;
- (unsigned long long)hash;
- (id)emailKey;
- (id)initWithEntityKey:(id)a0 entityType:(long long)a1 parentKey:(id)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)pseudoReminderKey;
- (id)pseudoEventKey;
- (id)interactionKey;
- (id)webPageKey;
- (id)curatedEventKey;
- (id)textMessageKey;
- (id)initWithSerializedEntityKey:(id)a0 entityType:(long long)a1 serializedParentKey:(id)a2;
- (BOOL)isEqualToDuplicateKey:(id)a0;
- (id)identityKey;

@end
