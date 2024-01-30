@class NSString, NSTimer, UIImage, VideosExtrasConstrainedArtworkContainerView;
@protocol VideosExtrasSlideshowViewControllerDataSource;

@interface VideosExtrasSlideshowViewController : UIViewController <CAAnimationDelegate, VideosExtrasZoomingImageTransitionParticipant>

@property (nonatomic, getter=isAnimatingTransition) BOOL animatingTransition;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *disappearingImageContainerView;
@property (retain, nonatomic) VideosExtrasConstrainedArtworkContainerView *imageContainerView;
@property (retain, nonatomic) UIImage *nextImage;
@property (retain, nonatomic) NSTimer *transitionTimer;
@property (weak, nonatomic) id<VideosExtrasSlideshowViewControllerDataSource> dataSource;
@property (nonatomic) unsigned long long transitionStyle;
@property (nonatomic) double transitionInterval;
@property (nonatomic) unsigned long long visibleImageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_reload;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)_numberOfImages;
- (void)viewDidLoad;
- (void)prepareZoomingImageTransitionWithContext:(id)a0;
- (void)performZoomingImageTransitionWithContext:(id)a0;
- (void)finalizeZoomingImageTransitionWithContext:(id)a0 transitionFinished:(BOOL)a1;
- (void)_invalidateTransitionTimer;
- (void)_prepareNextImageAndScheduleTransitionTimerIfAppropriate;
- (void)_loadImageContainerViewIfAppropriateWithImage:(id)a0;
- (void)_transitionDidComplete;
- (void)_transitionTimerDidFire:(id)a0;
- (void)_transitionToNextImageIfAppropriate;
- (void)_scheduleTransitionTimer;
- (void)_performInstantaneousTransition;
- (void)_performDissolveTransition;
- (void)_performPushTransition;
- (void)_performWipeTransition;

@end
