@class NSString;

@interface HKSharingAuthorization : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *authorizationIdentifier;
@property (readonly, copy, nonatomic) NSString *displayName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAuthorizationIdentifier:(id)a0 displayName:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAuthorizationIdentifier:(id)a0;

@end
