@class MKPointOfInterestFilter;

@interface MKStandardMapConfiguration : MKMapConfiguration

@property (nonatomic) long long mode;
@property (nonatomic) BOOL showsBuildings;
@property (readonly, nonatomic, getter=_allowsTerrainModeUpdates) BOOL allowsTerrainModeUpdates;
@property (nonatomic) BOOL _forcesModernMap;
@property (nonatomic) long long emphasisStyle;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) BOOL showsTraffic;

+ (BOOL)supportsSecureCoding;

- (id)initWithEmphasisStyle:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMapMode:(long long)a0 elevationStyle:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithMapMode:(long long)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToStandardMapConfiguration:(id)a0;
- (void)inheritStateFromMapView:(id)a0;
- (id)initWithMapMode:(long long)a0 landscape:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithElevationStyle:(long long)a0 emphasisStyle:(long long)a1;
- (id)initWithElevationStyle:(long long)a0;
- (id)init;
- (void)updateMapViewState:(id)a0;
- (void)_removeObserver:(id)a0 context:(void *)a1;
- (void).cxx_destruct;

@end
