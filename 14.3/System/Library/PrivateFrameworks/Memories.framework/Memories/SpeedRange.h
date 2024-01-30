@class SpeedRanges;

@interface SpeedRange : NSObject <NSCopying>

@property (nonatomic) int startMedia;
@property (nonatomic) int startClip;
@property (weak, nonatomic) SpeedRange *prev;
@property (weak, nonatomic) SpeedRange *next;
@property (weak, nonatomic) SpeedRanges *container;
@property (weak, nonatomic) SpeedRange *accurate;
@property (weak, nonatomic) SpeedRange *accurateNext;
@property (nonatomic) int leftEdge;
@property (nonatomic) int rightEdge;
@property (nonatomic) double rate;
@property (readonly, nonatomic) int durationMedia;
@property (readonly, nonatomic) int durationClip;
@property (readonly, nonatomic) BOOL isFreeze;
@property (readonly, nonatomic) int accurateStartClip;
@property (readonly, nonatomic) int accurateDurationClip;

+ (id)speedRangeWithRate:(float)a0 startMedia:(int)a1 startClip:(int)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })applySpeed:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)rippleClipTimeDown;
- (void)setAndRippleLeftEdge:(int)a0;
- (int)convertToMediaTimeAndUnrampedClipTime:(int *)a0;
- (id)splitRangeAtClipTime:(int)a0;
- (id)insertFreezeAtClipTime:(int)a0;

@end
