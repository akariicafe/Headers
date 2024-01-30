@class NSMeasurement;

@interface CPTravelEstimates : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timeRemainingColor;
@property (readonly, copy, nonatomic) NSMeasurement *distanceRemaining;
@property (readonly, nonatomic) double timeRemaining;

+ (id)_greenColor;
+ (id)_orangeColor;
+ (id)_redColor;
+ (id)timeRemainingColorForColor:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDistanceRemaining:(id)a0 timeRemaining:(double)a1;

@end
