@interface IPAVideoAdjustmentStack : IPAAdjustmentStack

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } naturalDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_debugDescriptionSuffix;
- (id)minimumVersionForFormat:(id)a0;

@end
