@interface VEKRangeSuggestion : VEKSuggestion

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;

- (id)description;

@end
