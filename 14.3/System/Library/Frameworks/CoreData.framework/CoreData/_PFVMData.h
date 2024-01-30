@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)retain;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (Class)classForCoder;

@end
