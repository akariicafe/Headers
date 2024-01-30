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

+ (id)locationsByFilteringDuplicates:(id)a0;
+ (long long)currentArchiveVersion;
+ (id)knownKeys;
+ (id)locationsByConsolidatingDuplicates:(id)a0 originalOrder:(id)a1;
+ (id)locationsByConsolidatingDuplicatesInBucket:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCloudDictionaryRepresentation:(id)a0;
- (id)initWithMapItem:(id)a0;
- (id)_sunAlmanacForDate:(id)a0;
- (id)summaryThatIsCompact:(BOOL)a0;
- (BOOL)isDayForDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isDay;
- (id)initWithPlacemark:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localDataRepresentation;
- (id)initWithMapItem:(id)a0 isCurrentLocation:(BOOL)a1;
- (id)sunsetForDate:(id)a0;
- (id)initWithLocalDataRepresentation:(id)a0;
- (id)summary;
- (BOOL)isEqual:(id)a0;
- (id)sunriseForDate:(id)a0;
- (id)cloudDictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithSearchResponse:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)sunrise:(id *)a0 andSunset:(id *)a1 forDate:(id)a2;

@end
