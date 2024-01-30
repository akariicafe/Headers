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

- (id)deliveryKey;
- (id)serialize;
- (id)bundleId;
- (id)description;
- (id)initWithSearchableItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageKey;
- (unsigned long long)hash;
- (id)initWithSerialized:(id)a0;
- (id)identityKey;
- (id)initWithEntityKey:(id)a0 entityType:(long long)a1 parentKey:(id)a2;
- (id)initWithSerializedEntityKey:(id)a0 entityType:(long long)a1 serializedParentKey:(id)a2;
- (id)initWithMessageIdHeaderValues:(id)a0 accountIdentifier:(id)a1;
- (BOOL)isEqualToDuplicateKey:(id)a0;
- (id)curatedEventKey;
- (id)contactDetailKey;
- (id)pseudoContactKey;
- (id)emailKey;
- (id)textMessageKey;
- (id)webPageKey;
- (id)interactionKey;
- (id)pseudoEventKey;
- (id)pseudoReminderKey;

@end
