@class NSNumber;

@interface NTKGalleonAltitude : NSObject {
    double _rawAltitude;
    double _rawAccuracy;
    double _rawPrecision;
}

@property (nonatomic) double altitude;
@property (nonatomic) double accuracy;
@property (retain, nonatomic) NSNumber *absoluteAltitudeAccuracy;
@property (retain, nonatomic) NSNumber *absoluteAltitudePrecision;
@property (nonatomic) BOOL displayTilde;

+ (id)initAltitude:(id)a0;

- (void).cxx_destruct;
- (double)_convertMeterInFeet:(double)a0;
- (double)_getCloserValue:(double)a0 low:(double)a1 high:(double)a2;
- (double)_getRoundedAccuracy:(double)a0 byUnit:(BOOL)a1;
- (double)_getRoundedPrecisionWithValue:(double)a0 multiplier:(double)a1;
- (double)_getRoundedValue:(double)a0 byRoundedPrecision:(double)a1;
- (void)_populateRoundedValue;
- (id)initWithAbsoluteAltitude:(id)a0;

@end
