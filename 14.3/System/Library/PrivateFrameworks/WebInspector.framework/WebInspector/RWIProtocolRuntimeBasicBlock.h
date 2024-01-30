@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (nonatomic) int startOffset;
@property (nonatomic) int endOffset;
@property (nonatomic) BOOL hasExecuted;
@property (nonatomic) int executionCount;

- (id)initWithStartOffset:(int)a0 endOffset:(int)a1 hasExecuted:(BOOL)a2 executionCount:(int)a3;

@end
