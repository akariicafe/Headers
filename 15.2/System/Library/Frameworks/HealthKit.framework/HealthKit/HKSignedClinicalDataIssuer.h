@class NSString, NSURL;

@interface HKSignedClinicalDataIssuer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSURL *wellKnownURL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 subtitle:(id)a2 wellKnownURL:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
