@class NSDictionary;

@interface CATActiveIDSServiceConnectionContentAcknowledge : NSObject <CATActiveIDSServiceConnectionMessageContent>

@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

@end
