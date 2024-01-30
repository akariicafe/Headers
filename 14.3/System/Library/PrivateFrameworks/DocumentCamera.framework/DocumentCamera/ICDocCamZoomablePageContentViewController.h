@class NSString, UIImageView, UIImage, UIScrollView;
@protocol ICDocCamZoomablePageContentDelegate;

@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL shouldSetupScalesInViewDidLayoutSubviews;
@property (nonatomic) struct CGSize { double width; double height; } prevScrollViewSize;
@property (weak, nonatomic) id<ICDocCamZoomablePageContentDelegate> pageContentDelegate;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) double zoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidZoom:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)resetZoom;
- (void)viewDidLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })zoomRectForScale:(float)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (void)viewDidLoad;
- (void)setupAccessibility;
- (void)resetImageCentering;
- (void)singleTap;
- (void)doubleTap:(id)a0;
- (void)view:(id)a0 setCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)setupScales;
- (void)pageContentViewDidPencilDown;

@end
