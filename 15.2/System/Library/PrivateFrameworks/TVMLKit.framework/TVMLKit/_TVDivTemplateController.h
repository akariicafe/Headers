@class IKViewElement, UIImageView, TVImageProxy, NSArray, _TVOrganizerView;

@interface _TVDivTemplateController : _TVBgImageLoadingViewController

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) TVImageProxy *backgroundImageProxy;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) _TVOrganizerView *contentView;
@property (copy, nonatomic) NSArray *viewControllers;

- (void)_updateContentView;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)preferredFocusEnvironments;
- (void)updateWithViewElement:(id)a0;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (id)_backgroundImageProxy;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;

@end
