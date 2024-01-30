@class NSString;

@interface SGPostalAddressComponents : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *street;
@property (readonly, nonatomic) NSString *subLocality;
@property (readonly, nonatomic) NSString *city;
@property (readonly, nonatomic) NSString *subAdministrativeArea;
@property (readonly, nonatomic) NSString *state;
@property (readonly, nonatomic) NSString *postalCode;
@property (readonly, nonatomic) NSString *country;
@property (readonly, nonatomic) NSString *isoCountryCode;

+ (id)components:(id)a0 city:(id)a1 state:(id)a2 postalCode:(id)a3 country:(id)a4;
+ (id)components:(id)a0 subLocality:(id)a1 city:(id)a2 subAdministrativeArea:(id)a3 state:(id)a4 postalCode:(id)a5 country:(id)a6 isoCountryCode:(id)a7;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStreet:(id)a0 subLocality:(id)a1 city:(id)a2 subAdministrativeArea:(id)a3 state:(id)a4 postalCode:(id)a5 country:(id)a6 isoCountryCode:(id)a7;
- (BOOL)isEqualToPostalAddressComponents:(id)a0;

@end
