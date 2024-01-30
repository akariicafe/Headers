@class VideosExtrasContext, UIView, NSLayoutConstraint, UIViewController;
@protocol VideosExtrasVideoPlaybackViewController;

@interface VideosExtrasFeatureContainerViewController : UIViewController {
    NSLayoutConstraint *_overlayViewAdjustmentConstraint;
}

@property (nonatomic) double collectionViewHeight;
@property (readonly, weak, nonatomic) VideosExtrasContext *context;
@property (retain, nonatomic) UIViewController<VideosExtrasVideoPlaybackViewController> *videoPlaybackViewController;
@property (weak, nonatomic) UIView *menuBarView;

- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_menuBarHeightChange:(id)a0;

@end
