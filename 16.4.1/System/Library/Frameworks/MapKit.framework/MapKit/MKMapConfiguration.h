@interface MKMapConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long landscape;
@property (nonatomic) long long elevationStyle;

+ (struct { long long x0; long long x1; long long x2; long long x3; long long x4; BOOL x5; })_cartographicConfigurationForMapConfiguration:(id)a0;
+ (id)_mapConfigurationWithCartographicConfiguration:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; BOOL x5; })a0;
+ (id)_potentiallyLossy_mapConfigurationWithCartographicConfiguration:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; BOOL x5; })a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)inheritStateFromMapView:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithElevationStyle:(long long)a0;
- (void)updateMapViewState:(id)a0;
- (void)_removeObserver:(id)a0 context:(void *)a1;

@end
