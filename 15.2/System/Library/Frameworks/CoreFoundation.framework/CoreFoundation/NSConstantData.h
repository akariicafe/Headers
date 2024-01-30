@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (BOOL)_copyWillRetain;
- (BOOL)_isCompact;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (BOOL)_providesConcreteBacking;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)initWithData:(id)a0;
- (id)retain;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)autorelease;
- (const void *)bytes;
- (BOOL)_isDeallocating;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
