@interface TSCHStyleOwnerUUIDDecoder : NSObject {
    unsigned char _UUID[16];
    unsigned long long _index;
}

+ (id)UUIDDecoderWithUUID:(id)a0;

- (id)initWithUUID:(id)a0;
- (unsigned char)decodeByte;
- (unsigned long long)decodeUInt64;
- (unsigned long long)decodeNSUIntegerFromUInt64;
- (void)endDecode;
- (BOOL)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)a0;

@end
