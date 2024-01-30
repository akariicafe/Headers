@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (const void *)bytes;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (unsigned long long)length;
- (BOOL)_providesConcreteBacking;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (id)initWithData:(id)a0;
- (BOOL)_copyWillRetain;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)copy;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)retain;
- (BOOL)_isCompact;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;

@end
