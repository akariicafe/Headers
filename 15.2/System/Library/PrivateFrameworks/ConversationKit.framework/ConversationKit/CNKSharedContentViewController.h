@interface CNKSharedContentViewController : UIViewController <UIScrollViewDelegate, CNKFaceTimePiPSourceProviding, CNKSharedContentSourceInfoProviding, CNKScreenSharingStateObserving> {
    void /* unknown type, empty encoding */ participant;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ sharedContentView;
    void /* unknown type, empty encoding */ previousViewModel;
    void /* unknown type, empty encoding */ previousScreenSnapshot;
    void /* unknown type, empty encoding */ avatarImageQueue;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ isPipped;

- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidZoom:(id)a0;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)a0;
- (struct CGSize { double x0; double x1; })preferredPiPContentAspectRatio;
- (id)viewControllerForPiP;
- (BOOL)restoreViewControllerHierarchyWhenExitingPiP;
- (id)sharedContentSourceName;
- (void)getSharedContentSourceAvatarWithImageHandler:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
