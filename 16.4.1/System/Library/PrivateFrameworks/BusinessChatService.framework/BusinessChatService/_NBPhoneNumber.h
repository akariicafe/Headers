@class NSNumber, NSString;

@interface _NBPhoneNumber : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) NSNumber *countryCode;
@property (retain, nonatomic) NSNumber *nationalNumber;
@property (retain, nonatomic) NSString *extension;
@property (nonatomic) BOOL italianLeadingZero;
@property (retain, nonatomic) NSNumber *numberOfLeadingZeros;
@property (retain, nonatomic) NSString *rawInput;
@property (retain, nonatomic) NSNumber *countryCodeSource;
@property (retain, nonatomic) NSString *preferredDomesticCarrierCode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)clearCountryCodeSource;
- (long long)getCountryCodeSourceOrDefault;

@end
