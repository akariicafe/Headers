@interface TSCH3DDataBufferResource : TSCH3DResource

+ (id)resource;
+ (id)resourceWithBuffer:(id)a0;

- (void)setChanged:(BOOL)a0;
- (void)setBuffer:(id)a0;
- (void)clear;
- (id)get;
- (id)description;
- (id)buffer;
- (id)initWithBuffer:(id)a0;
- (void)flushMemory;

@end
