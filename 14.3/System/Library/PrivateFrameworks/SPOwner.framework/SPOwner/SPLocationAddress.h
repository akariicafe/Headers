@class NSString;

@interface SPLocationAddress : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *formattedAddressLines;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *streetName;
@property (copy, nonatomic) NSString *streetAddress;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *stateCode;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *placemark;

- (id)initWithFormattedAddressLines:(id)a0 country:(id)a1 countryCode:(id)a2 streetName:(id)a3 streetAddress:(id)a4 locality:(id)a5 stateCode:(id)a6 administrativeArea:(id)a7 placemark:(id)a8;
- (id)initWithFormattedAddressLines:(id)a0 country:(id)a1 countryCode:(id)a2 streetName:(id)a3 streetAddress:(id)a4 locality:(id)a5 stateCode:(id)a6 administrativeArea:(id)a7;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
