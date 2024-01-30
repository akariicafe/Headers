@interface NSConstantData : NSData {
    unsigned long long _length;
    const char *_bytes;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (id)initWithData:(id)a0;
- (id)retain;
- (BOOL)_copyWillRetain;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (BOOL)_isCompact;
- (BOOL)_providesConcreteBacking;
- (const void *)bytes;
- (oneway void)release;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 freeWhenDone:(BOOL)a2;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copy;
- (BOOL)_isDeallocating;
- (id)init;
- (id)autorelease;
- (unsigned long long)retainCount;

@end
