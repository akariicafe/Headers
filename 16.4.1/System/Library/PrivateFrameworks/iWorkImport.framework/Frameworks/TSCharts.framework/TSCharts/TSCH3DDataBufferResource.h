@interface TSCH3DDataBufferResource : TSCH3DResource

+ (id)resource;
+ (id)resourceWithBuffer:(id)a0;

- (id)get;
- (void)setChanged:(BOOL)a0;
- (void)setBuffer:(id)a0;
- (id)buffer;
- (id)description;
- (void)clear;
- (id)initWithBuffer:(id)a0;
- (void)flushMemory;

@end
