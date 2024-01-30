@class AVPlayerController;

@interface AVPlayerControllerVolumeAnimator : NSObject

@property (nonatomic) double volumeToRestore;
@property (nonatomic, getter=isAnimatingTowardsZero) BOOL animatingTowardsZero;
@property (nonatomic, getter=isAnimatingAwayFromZero) BOOL animatingAwayFromZero;
@property (readonly, nonatomic) AVPlayerController *playerController;

- (BOOL)currentRouteHasVolumeControl;
- (void).cxx_destruct;
- (BOOL)canAnimateVolumeAwayFromZero;
- (BOOL)canAnimateVolumeTowardsZero;
- (id)initWithPlayerController:(id)a0;
- (void)restoreVolumeIfNeeded;
- (void)setProgressAwayFromZero:(double)a0;
- (void)setProgressTowardsZero:(double)a0;

@end
