@class NSDictionary;

@interface CATSharingMessage : NSObject <CATDictionaryCodable>

@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *contentDictionaryValue;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithContentMessage:(id)a0;
- (id)initWithMessageType:(long long)a0 contentDictionary:(id)a1;

@end
