@interface RWIProtocolRuntimeErrorRange : RWIProtocolJSONObject

@property (nonatomic) int startOffset;
@property (nonatomic) int endOffset;

- (id)initWithStartOffset:(int)a0 endOffset:(int)a1;

@end
