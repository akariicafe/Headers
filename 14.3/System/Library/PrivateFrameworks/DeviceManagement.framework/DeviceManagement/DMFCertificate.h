@class NSString, NSData;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL isIdentity;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCommonName:(id)a0 data:(id)a1 isIdentity:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;

@end
