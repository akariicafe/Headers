@class UIImage, UIImageView, UITapGestureRecognizer;
@protocol AXCCIconViewControllerDelegate;

@interface AXCCIconViewController : UIViewController {
    UIImage *_image;
    UIImageView *_glyphImageView;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak, nonatomic) id<AXCCIconViewControllerDelegate> iconDelegate;

- (id)initWithImage:(id)a0;
- (void)_handleTapGestureRecognizer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;

@end
