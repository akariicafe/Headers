@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (unsigned long long)length;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)retainCount;
- (id)retain;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (BOOL)_isDeallocating;
- (Class)classForCoder;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
