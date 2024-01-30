@class _UINavigationControllerPalette, UIViewController;

@interface PXNavigationBannerHelper : NSObject

@property (retain, nonatomic) _UINavigationControllerPalette *palette;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)initWithViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
