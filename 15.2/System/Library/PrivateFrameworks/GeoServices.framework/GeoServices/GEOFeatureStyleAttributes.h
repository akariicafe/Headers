@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {
    struct shared_ptr<FeatureStyleAttributes> { struct FeatureStyleAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } _attributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct GeoCodecsFeatureStylePair { unsigned int x0; int x1; } *v;
@property (readonly, nonatomic) struct GeoCodecsFeatureStylePairExt { unsigned int x0; unsigned long long x1; } *extAttrs;
@property (readonly, nonatomic) unsigned char countExtAttrs;
@property (readonly, nonatomic) unsigned char countAttrs;
@property (readonly, nonatomic) char featureType;
@property (readonly, nonatomic) unsigned int lineType;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) unsigned char rampDirection;
@property (readonly, nonatomic) BOOL isFreeway;
@property (readonly, nonatomic) BOOL isRailway;
@property (readonly, nonatomic) BOOL isBorder;
@property (readonly, nonatomic) BOOL hasDrivingSide;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) BOOL isRoadPedestrianNavigable;
@property (readonly, nonatomic) int sidewalkSide;
@property (readonly, nonatomic) int walkableSide;
@property (readonly, nonatomic) int bikeableSide;
@property (readonly, nonatomic) int bikeLaneSide;
@property (readonly, nonatomic) BOOL isWalkable;
@property (readonly, nonatomic) BOOL isDrivable;
@property (readonly, nonatomic) BOOL shouldSuppress3DBuildingStrokes;

+ (id)airportStyleAttributes;
+ (id)addressMarkerStyleAttributes;
+ (id)searchResultStyleAttributes;
+ (id)homeStyleAttributes;
+ (id)workStyleAttributes;
+ (id)schoolStyleAttributes;
+ (id)transitStationStyleAttributes;
+ (id)hotelStyleAttributes;
+ (id)parkedCarStyleAttributes;
+ (id)restaurantStyleAttributes;
+ (id)calendarEventStyleAttributes;
+ (id)frequentLocationStyleAttributes;
+ (id)gasStationStyleAttributes;
+ (id)evChargerStyleAttributes;
+ (id)carRentalStyleAttributes;
+ (id)ticketedEventStyleAttributes;
+ (id)inviteStyleAttributes;
+ (id)nearbyTransitStyleAttributes;
+ (id)styleAttributesForPlace:(id)a0;

- (BOOL)hasAttributes;
- (void)sort;
- (void)encodeWithCoder:(id)a0;
- (int)poiType;
- (BOOL)isSearchResult;
- (id)initWithGEOStyleAttributes:(id)a0;
- (id)description;
- (id)initWithFeatureStyleAttributesPtr:(const void *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLabelPOI;
- (BOOL)isLandmarkPOI;
- (id)copyWithAirportStyleAttributes;
- (void)replaceAttributes:(const struct GeoCodecsFeatureStylePair { unsigned int x0; int x1; } *)a0 count:(unsigned int)a1;
- (id)initWithPlaceStyleAttributes:(id)a0;
- (id)_initWithSharedStyleAttributes:(const void *)a0 extAttributes:(const struct GeoCodecsFeatureStylePairExt { unsigned int x0; unsigned long long x1; } *)a1 extAttributeCount:(unsigned char)a2;
- (id)initWithStyleAttributes:(const void *)a0;
- (struct shared_ptr<FeatureStyleAttributes> { struct FeatureStyleAttributes *x0; struct __shared_weak_count *x1; })featureStyleAttributesPtr;
- (void *)featureStyleAttributes;
- (void)setExtAttributes:(const struct GeoCodecsFeatureStylePairExt { unsigned int x0; unsigned long long x1; } *)a0 count:(unsigned int)a1;
- (struct shared_ptr<const FeatureStyleAttributes> { struct FeatureStyleAttributes *x0; struct __shared_weak_count *x1; })_sharedAttributes;
- (BOOL)isTransit;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (id)initWithPlaceDataStyleAttributes:(id)a0;
- (id)initWithAttributes:(unsigned int)a0;

@end
