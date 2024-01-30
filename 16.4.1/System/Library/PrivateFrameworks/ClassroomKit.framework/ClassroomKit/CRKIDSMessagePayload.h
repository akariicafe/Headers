@class CRKIDSMessageMetadata, NSDictionary;

@interface CRKIDSMessagePayload : NSObject <CRKDictionaryCodable>

@property (readonly, nonatomic) CRKIDSMessageMetadata *messageMetadata;
@property (readonly, copy, nonatomic) NSDictionary *messageContent;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessageContent:(id)a0 messageMetadata:(id)a1;

@end
