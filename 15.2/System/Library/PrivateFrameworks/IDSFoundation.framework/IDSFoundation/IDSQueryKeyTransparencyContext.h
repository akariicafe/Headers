@class NSUUID, NSData;

@interface IDSQueryKeyTransparencyContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *ticket;
@property (readonly, nonatomic) NSData *accountKey;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToQueryKeyTransparencyContext:(id)a0;
- (id)initWithTicket:(id)a0 accountKey:(id)a1;
- (unsigned long long)hash;

@end
