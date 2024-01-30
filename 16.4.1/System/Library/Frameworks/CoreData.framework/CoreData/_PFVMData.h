@interface _PFVMData : NSData {
    int _cd_rc;
    unsigned long long _length;
    void *_payload;
}

+ (Class)classForKeyedUnarchiver;

- (id)retain;
- (const void *)bytes;
- (oneway void)release;
- (id)initWithContentsOfFile:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;

@end
