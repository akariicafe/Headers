@interface _NSZeroData : NSData

+ (id)data;

- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (unsigned long long)length;
- (BOOL)_providesConcreteBacking;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)_dispatchData;
- (BOOL)_isCompact;

@end
