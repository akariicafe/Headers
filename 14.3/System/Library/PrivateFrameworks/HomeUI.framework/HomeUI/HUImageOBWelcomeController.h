@class UIImageView, UIImage;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController

@property (readonly, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImage *contentImage;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (double)_contentAspectRatio;
- (void)_updateContentMode;
- (void)viewDidLoad;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentImage:(id)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentView:(id)a3;
- (void)_viewDidUpdateContent;

@end
