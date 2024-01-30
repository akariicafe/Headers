@interface _UIPointVector : NSObject

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long count;
@property (nonatomic) void *vectors;

- (void)addVector:(SEL)a0;
- (void)dealloc;
- (id)init;
- (void)clear;
- (void)reset;
- (void /* unknown type, empty encoding */)lastVector;
- (void)removeVectorAtIndex:(unsigned long long)a0;
- (void /* unknown type, empty encoding */)vectorAtIndex:(unsigned long long)a0;

@end
