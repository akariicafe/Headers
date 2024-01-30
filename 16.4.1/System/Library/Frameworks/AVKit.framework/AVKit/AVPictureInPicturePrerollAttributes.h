@class UIColor, PGPlaybackStatePrerollAttributes;

@interface AVPictureInPicturePrerollAttributes : NSObject

@property (readonly, nonatomic) PGPlaybackStatePrerollAttributes *pegasusAttributes;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } requiredLinearPlaybackEndTime;
@property (readonly, nonatomic) UIColor *preferredTintColor;

+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 preferredTintColor:(id)a1;
+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 preferredTintColor:(id)a1;

- (void).cxx_destruct;
- (id)initWithPlaybackStatePrerollAttributes:(id)a0 requiredLinearPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
