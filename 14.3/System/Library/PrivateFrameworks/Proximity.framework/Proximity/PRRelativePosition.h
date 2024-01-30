@class PRRangeMeasurement, PRAngleMeasurement;

@interface PRRelativePosition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timestamp;
@property (readonly) long long cycleIndex;
@property (readonly, nonatomic) PRRangeMeasurement *range;
@property (readonly, nonatomic) PRAngleMeasurement *azimuth;
@property (readonly, nonatomic) PRAngleMeasurement *elevation;

+ (id)relativePositionWithTimestamp:(double)a0 range:(id)a1 azimuth:(id)a2 elevation:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimestamp:(double)a0 range:(id)a1 azimuth:(id)a2 elevation:(id)a3;

@end
