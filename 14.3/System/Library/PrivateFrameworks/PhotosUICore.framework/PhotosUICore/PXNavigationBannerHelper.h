@class _UINavigationControllerPalette, UIViewController;

@interface PXNavigationBannerHelper : NSObject

@property (retain, nonatomic) _UINavigationControllerPalette *palette;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithViewController:(id)a0;

@end
