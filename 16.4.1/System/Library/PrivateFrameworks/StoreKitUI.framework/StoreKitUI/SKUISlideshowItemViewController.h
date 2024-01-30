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
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_gestureRecognizer:(id)a0 canPreventGestureRecognizer:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)_newLoadingView;
- (void)_pinchGestureAction:(id)a0;

@end
