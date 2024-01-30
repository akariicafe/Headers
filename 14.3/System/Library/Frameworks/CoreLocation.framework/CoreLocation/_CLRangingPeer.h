@class NSData;

@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding> {
    id _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long macAddress;
@property (readonly, copy, nonatomic) NSData *secureRangingKeyID;

+ (unsigned long long)uintMacAddressFromString:(id)a0;
+ (id)hexStringMacAddressFromUInt:(unsigned long long)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithMacAddressAsUInt:(unsigned long long)a0 secureRangingKeyID:(id)a1;
- (id)initWithMacAddressAsString:(id)a0 secureRangingKeyID:(id)a1;
- (id)getMacAddressAsString;
- (BOOL)isEqualToPeer:(id)a0;
- (id)initWithMacAddressAsData:(id)a0 secureRangingKeyID:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
