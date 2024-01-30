@class NSURL, HMCameraSnapshot, NSString;

@interface HUCameraStreamFullScreenPresentingAnimator : HUCameraStreamFullScreenAnimator <UIViewControllerAnimatedTransitioning>

@property (readonly, nonatomic) HMCameraSnapshot *cameraSnapshot;
@property (retain, nonatomic) NSURL *demoSnapshotURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithSourceCameraCell:(id)a0 cameraSnapshot:(id)a1;
- (id)initWithSourceCameraCell:(id)a0 cameraSnapshot:(id)a1 snapshotDemoURL:(id)a2;

@end
