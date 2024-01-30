@class NSDate, NSError, NSNumber;

@interface NCAltitude : NSObject <NSCopying> {
    double _rawAltitude;
    double _rawAccuracy;
    double _rawPrecision;
}

@property (class, readonly, nonatomic) NCAltitude *idealizedAltitude;

@property (nonatomic) double altitude;
@property (nonatomic) long long type;
@property (nonatomic) double accuracy;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *reportedTimestamp;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL hasAltitudeReading;
@property (retain, nonatomic) NSNumber *absoluteAltitudeAccuracy;
@property (retain, nonatomic) NSNumber *absoluteAltitudePrecision;
@property (nonatomic) BOOL displayTildeForApp;
@property (nonatomic) BOOL displayTildeForComplication;
@property (readonly, nonatomic) BOOL hasReading;

+ (id)altitudeWithLocation:(id)a0 error:(id)a1;
+ (id)initAltitude:(id)a0;
+ (id)randomizedAltitude;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAbsoluteAltitude:(id)a0;
- (void)_populateRoundedValue;
- (id)initWithLocation:(id)a0 error:(id)a1;
- (BOOL)hasAcceptibleAccuracy;
- (double)_convertMeterInFeet:(double)a0;
- (double)_getRoundedPrecisionWithValue:(double)a0 multiplier:(double)a1;
- (double)_getRoundedValue:(double)a0 byRoundedPrecision:(double)a1;
- (double)_getRoundedAccuracy:(double)a0 byUnit:(BOOL)a1;
- (double)_getCloserValue:(double)a0 low:(double)a1 high:(double)a2;
- (id)initWithNCAltitude:(id)a0;
- (BOOL)isBetterThan:(id)a0;

@end
