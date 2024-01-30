@class VideosExtrasContext, UIView, NSLayoutConstraint, UIViewController;
@protocol VideosExtrasVideoPlaybackViewController;

@interface VideosExtrasFeatureContainerViewController : UIViewController {
    NSLayoutConstraint *_overlayViewAdjustmentConstraint;
}

@property (nonatomic) double collectionViewHeight;
@property (readonly, weak, nonatomic) VideosExtrasContext *context;
@property (retain, nonatomic) UIViewController<VideosExtrasVideoPlaybackViewController> *videoPlaybackViewController;
@property (weak, nonatomic) UIView *menuBarView;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_menuBarHeightChange:(id)a0;

@end
