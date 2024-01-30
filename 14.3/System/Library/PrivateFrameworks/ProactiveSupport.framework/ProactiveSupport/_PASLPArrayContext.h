@interface _PASLPArrayContext : NSObject

@property (readonly) const unsigned int *storage;
@property (readonly) unsigned long long count;

- (id)init;
- (id)initWithStorage:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
