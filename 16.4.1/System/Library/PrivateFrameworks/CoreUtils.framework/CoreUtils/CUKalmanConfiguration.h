@interface CUKalmanConfiguration : NSObject

@property (readonly, nonatomic) double paramR;
@property (readonly, nonatomic) double paramQ;
@property (readonly, nonatomic) double paramA;
@property (readonly, nonatomic) double paramB;
@property (readonly, nonatomic) double paramC;

+ (id)defaultConfiguration;
+ (id)bluetoothRSSIConfiguration;

- (id)initWithParamR:(double)a0 paramQ:(double)a1 paramA:(double)a2 paramB:(double)a3 paramC:(double)a4;

@end
