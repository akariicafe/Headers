@interface NSIdRunStorage : NSRunStorage

+ (void)initialize;

- (void)_reallocData:(unsigned long long)a0;
- (void)_allocData:(unsigned long long)a0;
- (void)dealloc;

@end
