@interface GEOSolarEclipticCelestialBodyData : NSObject

@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;

- (id)initWithDate:(id)a0 body:(long long)a1;
- (id)initWithDate:(id)a0 body:(long long)a1 useHighPrecision:(BOOL)a2;
- (id)initWithJulianDay:(double)a0 body:(long long)a1 useHighPrecision:(BOOL)a2;

@end
