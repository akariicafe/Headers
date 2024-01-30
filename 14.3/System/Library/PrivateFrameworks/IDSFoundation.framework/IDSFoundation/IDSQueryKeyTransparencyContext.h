@class NSUUID, NSString;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *ticket;
@property (readonly, nonatomic) NSString *accountIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToQueryKeyTransparencyContext:(id)a0;
- (id)initWithTicket:(id)a0 accountIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
