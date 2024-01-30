@class AVPlayerController;

@interface AVPlayerControllerVolumeAnimator : NSObject

@property (nonatomic) double volumeToRestore;
@property (nonatomic, getter=isAnimatingTowardsZero) BOOL animatingTowardsZero;
@property (nonatomic, getter=isAnimatingAwayFromZero) BOOL animatingAwayFromZero;
@property (readonly, nonatomic) AVPlayerController *playerController;

- (void).cxx_destruct;
- (BOOL)currentRouteHasVolumeControl;
- (id)initWithPlayerController:(id)a0;
- (BOOL)canAnimateVolumeTowardsZero;
- (BOOL)canAnimateVolumeAwayFromZero;
- (void)setProgressTowardsZero:(double)a0;
- (void)setProgressAwayFromZero:(double)a0;
- (void)restoreVolumeIfNeeded;

@end
