@interface BWVideoOrientationTimeMachineItem : NSObject

@property (nonatomic) double ptsSeconds;
@property (nonatomic) short exifOrientation;

- (id)description;
- (id)initWithPTSSeconds:(double)a0 exifOrientation:(short)a1;

@end
