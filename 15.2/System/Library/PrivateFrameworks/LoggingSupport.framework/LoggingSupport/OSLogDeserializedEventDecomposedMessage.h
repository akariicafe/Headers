@class NSArray, NSDictionary;

@interface OSLogDeserializedEventDecomposedMessage : OSLogEventDecomposedMessage

@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSDictionary *backingDict;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (unsigned long long)placeholderCount;
- (unsigned long long)state;
- (void).cxx_destruct;
- (id)literalPrefixAtIndex:(unsigned long long)a0;
- (id)argumentAtIndex:(unsigned long long)a0;
- (id)placeholderAtIndex:(unsigned long long)a0;

@end
