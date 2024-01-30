@class NSUUID, CVAPRRangeMeasurement, NSNumber, CVAPRAngleMeasurement;

@interface CVAPRDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long referenceFrame;
@property (retain, nonatomic) CVAPRRangeMeasurement *range;
@property (retain, nonatomic) CVAPRAngleMeasurement *azimuth;
@property (retain, nonatomic) CVAPRAngleMeasurement *elevation;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSNumber *sessionID;
@property (nonatomic) long long measurementNumber;
@property (nonatomic) double measurementTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) double mach_continuous_time;
@property (nonatomic) double utc_time;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)addTimes;

@end
