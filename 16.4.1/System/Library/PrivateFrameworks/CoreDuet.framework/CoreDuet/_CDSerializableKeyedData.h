@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject <NSCopying> {
    NSData *_encodedKey;
    unsigned char _keyChecksum;
    unsigned char _dataChecksum;
    BOOL _dataChecksumNeedsUpdate;
    NSString *_key;
    NSData *_data;
}

+ (id)log;
+ (unsigned char)byteChecksumOfData:(id)a0;
+ (id)errorForInvalidKeyEncoding;
+ (id)dataDeseralizedFrom:(void *)a0 maxSize:(unsigned long long)a1 checksum:(char *)a2 bytesRead:(unsigned long long *)a3;

- (unsigned long long)serializeData:(id)a0 withChecksum:(unsigned char)a1 to:(void *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
