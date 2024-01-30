@class NSDictionary, ASCAdamID, NSString;

@interface ASCLockupRequest : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *mediaQueryParams;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *context;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithID:(id)a0 kind:(id)a1 context:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)lockupRequestWithMediaQueryParams:(id)a0;
- (id)_initWithID:(id)a0 kind:(id)a1 context:(id)a2 minExternalVersionID:(id)a3;

@end
