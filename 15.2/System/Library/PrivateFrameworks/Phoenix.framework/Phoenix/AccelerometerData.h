@interface AccelerometerData : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

- (id)description;
- (id)initWithData:(struct { double x0; double x1; double x2; })a0 timestamp:(double)a1;

@end
