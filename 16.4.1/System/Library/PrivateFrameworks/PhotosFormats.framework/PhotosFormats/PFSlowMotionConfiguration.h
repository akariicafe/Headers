@class PFSlowMotionRampConfiguration;

@interface PFSlowMotionConfiguration : NSObject

@property (readonly, nonatomic) float volumeDuringSlowMotion;
@property (readonly, nonatomic) float volumeDuringRampToSlowMotion;
@property (readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampDown;
@property (readonly, retain, nonatomic) PFSlowMotionRampConfiguration *rampUp;

- (id)init;
- (void).cxx_destruct;

@end
