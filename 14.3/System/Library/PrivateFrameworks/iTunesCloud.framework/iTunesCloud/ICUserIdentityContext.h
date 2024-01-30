@class ICUserIdentity, ICUserIdentityStore;

@interface ICUserIdentityContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICUserIdentity *identity;
@property (readonly, nonatomic) ICUserIdentityStore *identityStore;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithIdentity:(id)a0 identityStore:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
