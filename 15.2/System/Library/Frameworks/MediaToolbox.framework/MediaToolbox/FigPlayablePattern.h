@class AVHapticSequence;
@protocol CHHapticAdvancedPatternPlayerExtended;

@interface FigPlayablePattern : NSObject

@property (nonatomic) BOOL usingCoreHaptics;
@property (retain, nonatomic) id<CHHapticAdvancedPatternPlayerExtended> player;
@property (retain, nonatomic) AVHapticSequence *sequence;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } outputTimeRange;

- (id)initWithSBuf:(struct opaqueCMSampleBuffer { } *)a0 chEngine:(id)a1;
- (id)initWithSBuf:(struct opaqueCMSampleBuffer { } *)a0 avhpEngine:(id)a1;
- (void)dealloc;

@end
