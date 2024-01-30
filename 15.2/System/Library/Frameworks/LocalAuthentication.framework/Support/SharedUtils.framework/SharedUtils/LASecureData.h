@interface LASecureData : NSObject {
    unsigned long long _allocatedLength;
    void *_bytes;
    unsigned long long _bytesLength;
}

+ (void)resetBytes:(void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithString:(id)a0;
+ (id)secureDataWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)secureDataWithData:(id)a0;

- (void)appendData:(id)a0;
- (id)initWithString:(id)a0;
- (void)appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (id)initWithData:(id)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)resize:(unsigned long long)a0;
- (void)appendString:(id)a0;
- (void)dealloc;
- (void)reset;
- (id)data;
- (void)prepareBuffer:(unsigned long long)a0;
- (BOOL)removeLastCharacter;

@end
