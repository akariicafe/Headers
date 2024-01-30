@interface _NSZeroData : NSData

+ (id)data;

- (BOOL)_isCompact;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (BOOL)_providesConcreteBacking;
- (unsigned long long)length;
- (id)_dispatchData;
- (unsigned long long)retainCount;
- (id)retain;
- (const void *)bytes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;

@end
