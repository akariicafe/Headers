@interface CannedAVSync : NSObject

@property (nonatomic) double base;
@property (nonatomic) double modulo;

+ (id)sharedCannedAVSync;

- (void)clear;
- (id)init;
- (double)clampForTime:(double)a0;
- (void)addDrift:(double)a0;
- (void)addStreamWithCount:(int)a0 rate:(double)a1;

@end
