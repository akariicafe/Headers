@interface TSCH3DDataBufferResource : TSCH3DResource

+ (id)resource;
+ (id)resourceWithBuffer:(id)a0;

- (id)get;
- (void)clear;
- (void)setChanged:(BOOL)a0;
- (id)buffer;
- (id)initWithBuffer:(id)a0;
- (id)description;
- (void)setBuffer:(id)a0;
- (void)flushMemory;

@end
