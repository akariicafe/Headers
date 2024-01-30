@class NSString, NSNumber, NSDate;

@interface CMOdometerData : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) NSNumber *currentSpeed;
@property (retain, nonatomic) NSNumber *averageSpeed;
@property (retain, nonatomic) NSNumber *accuracy;
@property (retain, nonatomic) NSNumber *gpsAltitude;
@property (retain, nonatomic) NSNumber *rawSpeed;
@property (retain, nonatomic) NSNumber *odometer;
@property (retain, nonatomic) NSNumber *gpsSpeedAccuracy;
@property (retain, nonatomic) NSNumber *timestampGps;
@property (retain, nonatomic) NSNumber *groundAltitude;
@property (retain, nonatomic) NSNumber *groundAltitudeUncertainty;
@property (retain, nonatomic) NSNumber *smoothedGPSAltitude;
@property (retain, nonatomic) NSNumber *smoothedGPSAltitudeUncertainty;
@property (retain, nonatomic) NSNumber *gpsCourseRadians;
@property (retain, nonatomic) NSNumber *gpsCourseAccuracy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDistance:(id)a0 startDate:(id)a1 endDate:(id)a2 currentSpeed:(id)a3 averageSpeed:(id)a4;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)binarySampleRepresentation;

@end
