@class NSString;

@interface WCDefaultCity : NSObject

@property (copy, nonatomic) NSString *localeCode;
@property (copy, nonatomic) NSString *timeZone;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *unlocalizedName;
@property (copy, nonatomic) NSString *countryName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;
@property (copy, nonatomic) NSString *countryOverride;
@property (copy, nonatomic) NSString *unlocalizedCountryOverride;

+ (id)cityFromAlCity:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
