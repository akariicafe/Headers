@class NSArray, NTKFaceViewController, NSString, UIView;

@interface NTKUVPreviewComplicationViewController : UIViewController <DeveloperToolsSupport.PreviewDisplaying>

@property (copy, nonatomic) NSArray *previewTimeline;
@property (retain, nonatomic) NTKFaceViewController *faceVC;
@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) NSArray *timeline;
@property (nonatomic) BOOL displayingLivePreview;
@property (readonly, nonatomic) BOOL wantsCustomPreviewSize;
@property (readonly, nonatomic) double customPreviewSizeCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)_updateFaceForTimeline;
- (void)_updateLiveness:(id)a0;
- (id)_faceViewControllerWithFace:(id)a0;
- (id)initWithTimeline:(id)a0;

@end
