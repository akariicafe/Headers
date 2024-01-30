@interface GEOHorizontalCelestialBodyData : NSObject

@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double azimuth;

- (id)initWithLocation:(struct { double x0; double x1; })a0 date:(id)a1 body:(long long)a2;
- (id)initWithLocation:(struct { double x0; double x1; })a0 date:(id)a1 body:(long long)a2 useHighPrecision:(BOOL)a3;
- (id)initWithLocation:(struct { double x0; double x1; })a0 julianDay:(double)a1 body:(long long)a2 useHighPrecision:(BOOL)a3;

@end
