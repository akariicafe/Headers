@class NSDictionary;

@interface CATActiveIDSServiceConnectionContentRequestMissingData : NSObject <CATActiveIDSServiceConnectionMessageContent>

@property (readonly, nonatomic) unsigned long long expectedSequenceNumber;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (id)initWithExpectedSequenceNumber:(unsigned long long)a0;

@end
