@class NSArray;

@interface CVAIMUCalibration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *noiseCharacteristics;
@property (retain, nonatomic) NSArray *gravity;
@property (nonatomic) double accelTimestampCorrection;
@property (retain, nonatomic) NSArray *accelConversion;
@property (retain, nonatomic) NSArray *gyroConversion;
@property (retain, nonatomic) NSArray *imuToIMURotation;
@property (retain, nonatomic) NSArray *imuToIMUTranslation;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
