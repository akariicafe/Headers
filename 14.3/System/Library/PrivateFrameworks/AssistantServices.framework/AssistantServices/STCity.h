@class NSString, NSNumber;

@interface STCity : NSObject <NSSecureCoding> {
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_timeZone;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_alCityID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithName:(id)a0 unlocalizedName:(id)a1 countryName:(id)a2 unlocalizedCountryName:(id)a3 timeZone:(id)a4 latitude:(id)a5 longitude:(id)a6 alCityID:(id)a7;
- (id)alCityValue;
- (void)encodeWithCoder:(id)a0;

@end
