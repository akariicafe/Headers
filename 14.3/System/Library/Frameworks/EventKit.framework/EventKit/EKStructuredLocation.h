@class EKPredictedLocationOfInterest, NSString, NSData, CLLocation;

@interface EKStructuredLocation : EKObject <NSCopying>

@property (copy, nonatomic) NSString *contactLabel;
@property (readonly, nonatomic) BOOL isStructured;
@property (retain, nonatomic) NSString *routing;
@property (copy, nonatomic) NSData *mapKitHandle;
@property (readonly, nonatomic) BOOL hasKnownSpatialData;
@property (retain, nonatomic) NSString *address;
@property (nonatomic, getter=isImprecise) BOOL imprecise;
@property (retain, nonatomic) EKPredictedLocationOfInterest *predictedLOI;
@property (readonly, nonatomic, getter=isPrediction) BOOL prediction;
@property (copy, nonatomic) NSString *derivedFrom;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (nonatomic) double radius;

+ (id)_stringByStrippingControlCharactersFromString:(id)a0;
+ (id)displayLabelForContact:(id)a0 unlocalizedLabel:(id)a1;
+ (id)locationWithTitle:(id)a0;
+ (id)locationWithMapItem:(id)a0;
+ (id)locationWithGEOMapItem:(id)a0;
+ (id)knownSingleValueKeysForComparison;
+ (id)locationWithPlacemark:(id)a0;
+ (id)knownIdentityKeysForComparison;
+ (Class)frozenClass;

- (BOOL)_reset;
- (id)referenceFrame;
- (BOOL)isEqualToLocation:(id)a0;
- (id)cacheKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLatitude:(id)a0;
- (id)latitude;
- (id)calLocation;
- (id)description;
- (id)semanticIdentifier;
- (id)radiusRaw;
- (void)setLongitude:(id)a0;
- (void)updateFromMapItem:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (id)longitude;
- (void)setRadiusRaw:(id)a0;
- (void)_clearGeoLocationCache;
- (id)geoURLString;

@end
