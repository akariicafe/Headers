@class VKImageAnalysisInteraction, NSString, UIImageView, UIImage, UIScrollView;
@protocol ICDocCamZoomablePageContentDelegate;

@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL shouldSetupScalesInViewDidLayoutSubviews;
@property (nonatomic) struct CGSize { double width; double height; } prevScrollViewSize;
@property (retain, nonatomic) VKImageAnalysisInteraction *analysisInteraction;
@property (weak, nonatomic) id<ICDocCamZoomablePageContentDelegate> pageContentDelegate;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) double zoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)scrollViewDidZoom:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)doubleTap:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)resetZoom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomRectForScale:(float)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)setupAccessibility;
- (void)resetImageCentering;
- (void)singleTap;
- (void)analyzeCurrentImageIfNecessary;
- (void)view:(id)a0 setCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)setupScales;
- (void)pageContentViewDidPencilDown;
- (BOOL)isTouchingAnalyzableContentAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
