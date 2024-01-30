@class UIImageView, UIImage;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController

@property (readonly, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImage *contentImage;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)_updateContentMode;
- (double)_contentAspectRatio;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentImage:(id)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentView:(id)a3;
- (void)_viewDidUpdateContent;

@end
