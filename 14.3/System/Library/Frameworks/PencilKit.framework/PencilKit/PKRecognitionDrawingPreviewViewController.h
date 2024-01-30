@class NSString, UIImageView, UIImage, UIScrollView;

@interface PKRecognitionDrawingPreviewViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) UIImage *drawingImage;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (void)centerImageView;
- (id)initWithDrawingImage:(id)a0;

@end
