@class CWFNetworkProfile;

@interface CWFAutoJoinParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long trigger;
@property (nonatomic) long long mode;
@property (copy, nonatomic) CWFNetworkProfile *targetNetworkProfile;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAutoJoinParameters:(id)a0;

@end
