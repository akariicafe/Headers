@class UIImageView, UIImage;

@interface HUPCImageContentController : HUPCCenterFillContentController

@property (readonly, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImage *contentImage;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)_updateContentMode;
- (double)_contentAspectRatio;
- (void)_viewDidUpdateContent;
- (id)initWithTitle:(id)a0 detailText:(id)a1 contentImage:(id)a2;

@end
