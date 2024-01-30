@interface IPAVideoAdjustmentStack : IPAAdjustmentStack

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } naturalDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)minimumVersionForFormat:(id)a0;
- (id)_debugDescriptionSuffix;

@end
