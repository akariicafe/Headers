@class NSArray, NSString;

@interface FMFPlacemark : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *formattedAddressLines;
@property (retain, nonatomic) NSString *locality;
@property (retain, nonatomic) NSString *administrativeArea;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *streetAddress;
@property (retain, nonatomic) NSString *streetName;

- (void)encodeWithCoder:(id)a0;
- (id)formattedAddress;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryValue;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithLocality:(id)a0 administrativeArea:(id)a1 country:(id)a2 state:(id)a3 streetAddress:(id)a4 streetName:(id)a5;

@end
