@interface TSCHStyleOwnerUUIDDecoder : NSObject {
    unsigned char mUUID[16];
    unsigned long long mIndex;
}

+ (id)UUIDDecoderWithUUID:(id)a0;

- (unsigned char)decodeByte;
- (unsigned long long)decodeUInt64;
- (id)initWithUUID:(id)a0;
- (BOOL)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)a0;
- (unsigned long long)decodeNSUIntegerFromUInt64;
- (void)endDecode;

@end
