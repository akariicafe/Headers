@interface TSCHStyleOwnerUUIDEncoder : NSObject {
    unsigned char _UUID[16];
    unsigned long long _index;
}

+ (id)styleOwnerBaseUUIDString;
+ (id)UUIDEncoder;
+ (id)styleOwnerBaseUUID;
+ (id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)a0;

- (void)encodeByte:(unsigned char)a0;
- (void)encodeUInt64:(unsigned long long)a0;
- (id)init;
- (BOOL)hasSpaceToEncodeNumberOfBytes:(unsigned long long)a0;
- (void)encodeUInt64FromNSUInteger:(unsigned long long)a0;
- (id)encodedUUID;

@end
