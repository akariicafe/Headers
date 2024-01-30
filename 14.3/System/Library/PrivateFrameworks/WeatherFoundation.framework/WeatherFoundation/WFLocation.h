@class NSTimeZone, NSString, CLLocation, NSDate;

@interface WFLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *wf_weatherChannelGeocodeValue;
@property long long archiveVersion;
@property (copy, nonatomic) CLLocation *geoLocation;
@property (copy, nonatomic) NSString *locationID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *weatherDisplayName;
@property (copy, nonatomic) NSString *weatherLocationName;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *county;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *stateAbbreviation;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *countryAbbreviation;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) BOOL shouldQueryForAirQualityData;
@property (readonly, nonatomic) BOOL needsGeocoding;

+ (id)locationsByConsolidatingDuplicatesInBucket:(id)a0;
+ (id)locationsByConsolidatingDuplicates:(id)a0 originalOrder:(id)a1;
+ (id)knownKeys;
+ (id)locationsByFilteringDuplicates:(id)a0;
+ (long long)currentArchiveVersion;

- (BOOL)isDay;
- (id)summary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)sunrise:(id *)a0 andSunset:(id *)a1 forDate:(id)a2;
- (id)initWithMapItem:(id)a0 isCurrentLocation:(BOOL)a1;
- (id)summaryThatIsCompact:(BOOL)a0;
- (BOOL)isDayForDate:(id)a0;
- (id)_sunAlmanacForDate:(id)a0;
- (id)countriesSupportAQI;
- (id)initWithSearchResponse:(id)a0;
- (id)sunriseForDate:(id)a0;
- (id)sunsetForDate:(id)a0;
- (id)localDataRepresentation;
- (id)initWithLocalDataRepresentation:(id)a0;
- (id)cloudDictionaryRepresentation;
- (id)initWithCloudDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithMapItem:(id)a0;
- (id)initWithPlacemark:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
