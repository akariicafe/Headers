@interface HUVelocitySample : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } start;
@property (nonatomic) struct CGPoint { double x; double y; } end;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } translation;
@property (readonly, nonatomic) double dt;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } velocity;

+ (id)sampleWithStart:(struct CGPoint { double x0; double x1; })a0 end:(struct CGPoint { double x0; double x1; })a1 startTime:(double)a2 endTime:(double)a3;

- (BOOL)isSampleDistinctFromPoint:(struct CGPoint { double x0; double x1; })a0;

@end
