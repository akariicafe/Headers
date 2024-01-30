@interface IPAVideoPlaybackSettings : IPAEditDescription

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } naturalDuration;

+ (void)initialize;
+ (id)playbackSettingsForAdjustments:(id)a0;
+ (Class)expectedOperationClass;
+ (Class)operationClassForIdentifier:(id)a0;
+ (id)presetifyAdjustmentStack:(id)a0;

- (id)debugDescription;
- (id)initWithOperations:(id)a0;
- (BOOL)isEqualToDescription:(id)a0;
- (id)operationWithIdentifier:(id)a0;
- (id)archivalRepresentation;
- (id)descriptionByAddingOperation:(id)a0;
- (id)descriptionByAddingOperation:(id)a0 atIndex:(unsigned long long)a1;
- (id)descriptionByInsertingOrReplacingOperation:(id)a0;
- (id)descriptionByReplacingOperation:(id)a0 atIndex:(unsigned long long)a1;
- (id)descriptionWithOperations:(id)a0;
- (id)initWithOperations:(id)a0 naturalDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })naturalPlaybackRange;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalTimeForPosterFrame;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalTimeFromScaledTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)posterFrameOperation;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })scaledDuration;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })scaledPlaybackRangeForScaledDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })scaledTimeFromNaturalTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)slomoOperation;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)a0;
- (id)trimOperation;

@end
