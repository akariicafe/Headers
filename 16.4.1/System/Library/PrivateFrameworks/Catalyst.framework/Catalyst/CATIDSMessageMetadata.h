@class NSUUID, NSDictionary;

@interface CATIDSMessageMetadata : NSObject <CATDictionaryCodable>

@property (readonly, nonatomic) NSUUID *messageIdentifier;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) unsigned long long messagingVersion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessageType:(long long)a0;
- (id)initWithMessageIdentifier:(id)a0 messageType:(long long)a1 messagingVersion:(long long)a2;

@end
