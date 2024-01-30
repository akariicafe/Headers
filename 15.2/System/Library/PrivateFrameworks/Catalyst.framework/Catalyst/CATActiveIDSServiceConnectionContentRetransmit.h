@class NSArray, NSDictionary;

@interface CATActiveIDSServiceConnectionContentRetransmit : NSObject <CATActiveIDSServiceConnectionMessageContent>

@property (readonly, copy, nonatomic) NSArray *sequenceNumbers;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithSequenceNumbers:(id)a0;

@end
