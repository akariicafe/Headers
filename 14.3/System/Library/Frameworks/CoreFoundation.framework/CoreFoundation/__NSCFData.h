@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (const void *)bytes;
- (void)setLength:(unsigned long long)a0;
- (void *)mutableBytes;
- (unsigned long long)length;
- (BOOL)_providesConcreteBacking;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;

@end
