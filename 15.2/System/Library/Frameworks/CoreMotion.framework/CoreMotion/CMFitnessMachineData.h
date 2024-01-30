@class NSDate;

@interface CMFitnessMachineData : NSObject <NSSecureCoding, NSCopying> {
    double fTimestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double totalEnergy;
@property (nonatomic) double totalDistance;
@property (nonatomic) double totalElevationAscended;
@property (nonatomic) long long totalStrideCount;
@property (nonatomic) long long totalStrokeCount;
@property (nonatomic) long long totalFloorsClimbed;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double inclination;
@property (nonatomic) double resistanceLevel;

+ (BOOL)isAvailable;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(id)a0;
- (void)dealloc;
- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData { double x0; double x1; double x2; double x3; double x4; long long x5; long long x6; long long x7; double x8; double x9; double x10; double x11; double x12; double x13; } *)a0;

@end
