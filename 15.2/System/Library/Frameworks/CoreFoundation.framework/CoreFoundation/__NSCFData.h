@interface __NSCFData : NSMutableData {
    unsigned long long _cfinfoa;
    long long _length;
    long long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setLength:(unsigned long long)a0;
- (BOOL)_providesConcreteBacking;
- (void *)mutableBytes;
- (unsigned long long)length;
- (unsigned long long)retainCount;
- (id)retain;
- (const void *)bytes;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
