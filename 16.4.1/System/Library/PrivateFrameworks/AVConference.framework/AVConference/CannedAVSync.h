@interface CannedAVSync : NSObject

@property (nonatomic) double base;
@property (nonatomic) double modulo;

+ (id)sharedCannedAVSync;

- (id)init;
- (void)clear;
- (void)addDrift:(double)a0;
- (void)addStreamWithCount:(int)a0 rate:(double)a1;
- (double)clampForTime:(double)a0;

@end
