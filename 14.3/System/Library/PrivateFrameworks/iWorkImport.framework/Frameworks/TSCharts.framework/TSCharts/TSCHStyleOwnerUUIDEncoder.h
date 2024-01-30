@interface TSCHStyleOwnerUUIDEncoder : NSObject {
    unsigned char mUUID[16];
    unsigned long long mIndex;
}

+ (id)styleOwnerBaseUUIDString;
+ (id)UUIDEncoder;
+ (id)styleOwnerBaseUUID;
+ (id)UUIDEncoderWithStyleOwnerPathType:(unsigned char)a0;

- (id)init;
- (void)encodeByte:(unsigned char)a0;
- (void)encodeUInt64:(unsigned long long)a0;
- (BOOL)hasSpaceToEncodeNumberOfBytes:(unsigned long long)a0;
- (void)encodeUInt64FromNSUInteger:(unsigned long long)a0;
- (id)encodedUUID;

@end
