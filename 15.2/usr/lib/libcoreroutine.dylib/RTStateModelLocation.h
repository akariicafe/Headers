@interface RTStateModelLocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double Latitude_deg;
@property (nonatomic) double Longitude_deg;
@property (nonatomic) double uncertainty_m;
@property (nonatomic) double confidence;
@property (nonatomic) double timestamp_s;
@property (nonatomic) int referenceFrame;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLat:(double)a0 Lon:(double)a1 Uncertainty:(double)a2 confidence:(double)a3 andTimestamp_s:(double)a4 referenceFrame:(int)a5;
- (id)description;
- (id)initWithRTLocation:(id)a0;
- (id)initWithLat:(double)a0 Lon:(double)a1 Uncertainty:(double)a2 confidence:(double)a3 andTimestamp_s:(double)a4;
- (id)init;
- (id)initWithCLLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLatitude:(double)a0 longitude:(double)a1 uncertainty:(double)a2;

@end
