@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) long long verificationState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPushToken:(id)a0 verificationState:(long long)a1;
- (BOOL)isEqualToEndpointTransparencyState:(id)a0;

@end
