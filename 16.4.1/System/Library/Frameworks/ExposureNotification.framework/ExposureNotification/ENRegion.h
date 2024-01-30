@class NSString;

@interface ENRegion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *subdivisionCode;
@property (readonly, copy, nonatomic) NSString *regionCode;

+ (id)regionWithCode:(id)a0;
+ (BOOL)validSubdivisionCode:(id)a0 forCountryCode:(id)a1;
+ (id)regionFromServerResponseDictionary:(id)a0;

- (BOOL)isCountryCodeEqualToRegion:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCountryCode:(id)a0 subdivisionCode:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isSubdivisionCodeEqualToRegion:(id)a0;
- (BOOL)validSubdivisionCode;
- (id)description;
- (id)initWithCountryCode:(id)a0;
- (void).cxx_destruct;

@end
