@class NSString, SXAnimatedImageController, SXDragManager, SXImageView;
@protocol SXImageViewFactory, SXMediaSharingPolicyProvider;

@interface SXImageComponentView : SXMediaComponentView <UIGestureRecognizerDelegate, SXImageViewDelegate, SXDragManagerDataSource>

@property (readonly, nonatomic) id<SXImageViewFactory> imageViewFactory;
@property (readonly, nonatomic) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;
@property (readonly, nonatomic) SXImageView *imageView;
@property (retain, nonatomic) SXAnimatedImageController *animatedImageController;
@property (retain, nonatomic) SXDragManager *dragManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)discardContents;
- (void).cxx_destruct;
- (void)layoutImageView;
- (id)imageResource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;
- (void)visibilityStateDidChangeFromState:(long long)a0;
- (id)dragManager:(id)a0 dragableAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)imageView:(id)a0 didLoadAnimatedImage:(id)a1;
- (unsigned long long)analyticsMediaType;
- (id)contentViewForBehavior:(id)a0;
- (void)imageView:(id)a0 didLoadImage:(id)a1;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 imageViewFactory:(id)a6 mediaSharingPolicyProvider:(id)a7;
- (void)loadComponent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalFrameForContentView:(id)a0 behavior:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionContentFrame;
- (id)transitionContentView;
- (BOOL)usesThumbnailWithImageIdentifier:(id)a0;
- (id)viewForDragManager:(id)a0;

@end
