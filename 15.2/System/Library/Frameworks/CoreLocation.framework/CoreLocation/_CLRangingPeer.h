@class NSData;

@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long macAddress;
@property (readonly, copy, nonatomic) NSData *secureRangingKeyID;

+ (unsigned long long)uintMacAddressFromString:(id)a0;
+ (id)hexStringMacAddressFromUInt:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToPeer:(id)a0;
- (id)initWithMacAddressAsUInt:(unsigned long long)a0 secureRangingKeyID:(id)a1;
- (id)initWithMacAddressAsString:(id)a0 secureRangingKeyID:(id)a1;
- (id)getMacAddressAsString;
- (id)initWithMacAddressAsData:(id)a0 secureRangingKeyID:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
