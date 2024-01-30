@class NSArray, NTKFaceViewController, UIView;

@interface NTKUVPreviewComplicationViewController : UIViewController

@property (copy, nonatomic) NSArray *previewTimeline;
@property (retain, nonatomic) NTKFaceViewController *faceVC;
@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) NSArray *timeline;
@property (readonly, nonatomic) BOOL wantsCustomPreviewSize;
@property (nonatomic) BOOL displayingLivePreview;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithTimeline:(id)a0;
- (void)_updateFaceForTimeline;
- (void)_updateLiveness:(id)a0;
- (id)_faceViewControllerWithFace:(id)a0;

@end
