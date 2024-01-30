@class NSData, NSObject;
@protocol SGEntityKey;

@interface SGDuplicateKey : NSObject <NSCopying>

@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) NSObject<SGEntityKey> *entityKey;
@property (readonly, nonatomic) SGDuplicateKey *parentKey;
@property (readonly, nonatomic) NSData *compositeHash;

+ (id)duplicateKeyForCuratedEventWithExternalID:(id)a0;
+ (id)duplicateKeyForDeliveryWithProviderString:(id)a0 trackingNumber:(id)a1 parentKey:(id)a2;
+ (id)duplicateKeyForEmailWithSource:(id)a0 messageId:(id)a1;
+ (id)duplicateKeyForInteraction:(id)a0 fromBundleIdentifier:(id)a1;
+ (id)duplicateKeyForInteractionIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
+ (id)duplicateKeyForInteractionWithBundleId:(id)a0 personHandle:(id)a1;
+ (id)duplicateKeyForMessage:(id)a0 fromSource:(id)a1;
+ (id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)a0 endDate:(id)a1 title:(id)a2 participants:(id)a3 parentKey:(id)a4;
+ (id)duplicateKeyForPseudoContactWithIdentity:(id)a0 parentKey:(id)a1;
+ (id)duplicateKeyForPseudoEventWithGroupId:(id)a0 parentKey:(id)a1;
+ (id)duplicateKeyForPseudoReminderWithGroupId:(id)a0 withCreationTime:(struct SGUnixTimestamp_ { double x0; })a1 parentKey:(id)a2;
+ (id)duplicateKeyForSchemaOrg;
+ (id)duplicateKeyForSearchableItem:(id)a0;
+ (id)duplicateKeyForTextMessageWithSource:(id)a0 uniqueIdentifier:(id)a1;
+ (id)duplicateKeyForWebPageFromSource:(id)a0;
+ (BOOL)serializationPassesBasicScrutiny:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleId;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSearchableItem:(id)a0;
- (id)serialize;
- (id)description;
- (void).cxx_destruct;
- (id)messageKey;
- (id)curatedEventKey;
- (id)contactDetailKey;
- (id)deliveryKey;
- (id)emailKey;
- (id)identityKey;
- (id)initWithEntityKey:(id)a0 entityType:(long long)a1 parentKey:(id)a2;
- (id)initWithMessageIdHeaderValues:(id)a0 accountIdentifier:(id)a1;
- (id)initWithSerialized:(id)a0;
- (id)initWithSerializedEntityKey:(id)a0 entityType:(long long)a1 serializedParentKey:(id)a2;
- (id)interactionKey;
- (BOOL)isEqualToDuplicateKey:(id)a0;
- (id)pseudoContactKey;
- (id)pseudoEventKey;
- (id)pseudoReminderKey;
- (id)textMessageKey;
- (id)webPageKey;

@end
