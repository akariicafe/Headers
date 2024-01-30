@class NSDictionary, ASCAdamID, NSString;

@interface ASCLockupRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *mediaQueryParams;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;

+ (id)_requestWithID:(id)a0 kind:(id)a1 context:(id)a2 productVariantID:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithID:(id)a0 kind:(id)a1 context:(id)a2;
- (id)lockupRequestWithMediaQueryParams:(id)a0;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 minExternalVersionID:(id)a3 latestReleaseID:(id)a4 productVariantID:(id)a5;

@end
