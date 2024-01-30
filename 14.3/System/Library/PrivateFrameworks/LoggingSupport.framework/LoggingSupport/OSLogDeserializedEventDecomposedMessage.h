@class NSArray, NSDictionary;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDictionary *backingDict;

- (void).cxx_destruct;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)placeholderAtIndex:(unsigned long long)a0;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (unsigned long long)placeholderCount;
- (id)initWithDict:(id)a0 metadata:(id)a1;
- (unsigned long long)state;

@end
