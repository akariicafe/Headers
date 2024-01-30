@class NSString, NSDictionary;

@interface ALCity : NSObject {
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_countryOverride;
    NSString *_identifierForCPCity;
    BOOL _localizationAttempted;
}

@property (readonly, nonatomic) NSString *classicIdentifier;
@property (readonly, nonatomic) NSDictionary *properties;
@property (nonatomic) int identifier;
@property (retain, nonatomic) NSString *localeCode;
@property (retain, nonatomic) NSString *timeZone;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *yahooCode;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *unlocalizedName;
@property (retain, nonatomic) NSString *countryName;
@property (retain, nonatomic) NSString *unlocalizedCountryName;
@property (retain, nonatomic) NSString *countryOverride;
@property (retain, nonatomic) NSString *unlocalizedCountryOverride;
@property (nonatomic) BOOL displayNameIncludingCountryShowsOnlyCountry;

- (void)ensureLocalized;
- (id)initWithProperties:(id)a0;
- (id)initWithSQLRow:(char **)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)displayNameIncludingCountry:(BOOL)a0 withFormat:(id)a1;
- (id)description;
- (id)displayNameIncludingCountry:(BOOL)a0;

@end
