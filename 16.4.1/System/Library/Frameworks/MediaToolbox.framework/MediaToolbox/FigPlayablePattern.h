@protocol CHHapticAdvancedPatternPlayerExtended;

@interface FigPlayablePattern : NSObject

@property (retain, nonatomic) id<CHHapticAdvancedPatternPlayerExtended> player;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } outputTimeRange;

- (void)dealloc;
- (id)initWithSBuf:(struct opaqueCMSampleBuffer { } *)a0 chEngine:(id)a1;

@end
