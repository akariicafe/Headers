@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) long long verificationState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToEndpointTransparencyState:(id)a0;
- (id)initWithPushToken:(id)a0 verificationState:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
