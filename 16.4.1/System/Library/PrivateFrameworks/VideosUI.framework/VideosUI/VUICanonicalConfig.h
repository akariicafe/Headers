@interface VUICanonicalConfig : NSObject

@property (nonatomic) float videoViewOffscreenThresholdToStopPlayback;
@property (nonatomic) double playbackDelayInterval;

- (id)init;

@end
