@class UIImage, UIImageView;

@interface _SBAlertItemHeaderViewController : UIViewController {
    UIImageView *_imageView;
}

@property (readonly, nonatomic) UIImage *image;

- (id)initWithImage:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_expectedSize;
- (double)_topMarginOffset;
- (double)_bottomMarginOffset;

@end
