@interface NSIdRunStorage : NSRunStorage

+ (void)initialize;

- (void)_allocData:(unsigned long long)a0;
- (void)dealloc;
- (void)_reallocData:(unsigned long long)a0;

@end
