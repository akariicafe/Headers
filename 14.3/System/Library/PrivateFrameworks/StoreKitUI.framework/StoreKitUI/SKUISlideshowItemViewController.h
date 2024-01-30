@class SKUISlideshowImageScrollView, SKUIClientContext, UIImage, NSString, UIView;
@protocol SKUISlideshowItemViewControllerDelegate;

@interface SKUISlideshowItemViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate> {
    UIView *_loadingView;
    BOOL _zoomingGestureThresholdBroken;
    struct CGPoint { double x; double y; } _lastContentOffset;
    double _lastZoomScale;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUISlideshowItemViewControllerDelegate> delegate;
@property (readonly, nonatomic) SKUISlideshowImageScrollView *imageScrollView;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic) long long indexInCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_gestureRecognizer:(id)a0 canBePreventedByGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (BOOL)_gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (void)dealloc;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)_newLoadingView;
- (void)_pinchGestureAction:(id)a0;

@end
