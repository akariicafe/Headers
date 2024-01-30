@class GEOEquatorialCelestialBodyData, GEOCelestialRiseTransitSet, NSDate, GEOHorizontalCelestialBodyData, GEOSolarEclipticCelestialBodyData;

@interface GEOCelestialEphemeris : NSObject {
    GEOCelestialRiseTransitSet *_riseTransitSet;
    double _julianDay;
    struct { double latitude; double longitude; } _coordinate;
    long long _body;
    GEOSolarEclipticCelestialBodyData *_eclipticCoord;
    GEOEquatorialCelestialBodyData *_equatorialCoord;
    GEOHorizontalCelestialBodyData *_horizontalCoord;
    BOOL _highPrecision;
}

@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) NSDate *transit;
@property (readonly, nonatomic) BOOL isTransitAboveHorizon;
@property (readonly, nonatomic) NSDate *set;
@property (readonly, nonatomic) double phaseAngle;
@property (readonly, nonatomic) double illuminatedFraction;
@property (readonly, nonatomic) double elongation;
@property (readonly, nonatomic) double parallacticAngle;
@property (readonly, nonatomic) GEOSolarEclipticCelestialBodyData *eclipticCoord;
@property (readonly, nonatomic) GEOEquatorialCelestialBodyData *equatorialCoord;
@property (readonly, nonatomic) GEOHorizontalCelestialBodyData *horizontalCoord;

- (void).cxx_destruct;
- (id)initWithLocation:(struct { double x0; double x1; })a0 date:(id)a1 body:(long long)a2 useHighPrecision:(BOOL)a3;
- (id)initWithLocation:(struct { double x0; double x1; })a0 date:(id)a1 body:(long long)a2;
- (id)description;
- (id)initWithLocation:(struct { double x0; double x1; })a0 julianDay:(double)a1 body:(long long)a2 altitude:(double)a3 useHighPrecision:(BOOL)a4;

@end
