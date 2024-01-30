@class NSMeasurement;

@interface MXLocationActivityMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeBestAccuracyTime;
@property (readonly) NSMeasurement *cumulativeBestAccuracyForNavigationTime;
@property (readonly) NSMeasurement *cumulativeNearestTenMetersAccuracyTime;
@property (readonly) NSMeasurement *cumulativeHundredMetersAccuracyTime;
@property (readonly) NSMeasurement *cumulativeKilometerAccuracyTime;
@property (readonly) NSMeasurement *cumulativeThreeKilometersAccuracyTime;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCumulativeBestAccuracyTimeMeasurement:(id)a0 cumulativeBestAccuracyForNavigationTimeMeasurement:(id)a1 nearestTenMetersAccuracyTimeMeasurement:(id)a2 hundredMetersAccuracyTimeMeasurement:(id)a3 kilometerAccuracyTimeMeasurement:(id)a4 threeKilometerAccuracyTimeMeasurement:(id)a5;

@end
