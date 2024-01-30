@interface LASecureData : NSObject {
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (void)resetBytes:(void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithData:(id)a0;
+ (id)secureDataWithString:(id)a0;

- (id)initWithData:(id)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (void)appendString:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)appendData:(id)a0;
- (id)initWithString:(id)a0;
- (unsigned long long)length;
- (id)data;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)reset;
- (void)resize:(unsigned long long)a0;
- (id)nullTerminatedCopy;
- (void)prepareBuffer:(unsigned long long)a0;
- (BOOL)removeLastCharacter;

@end
