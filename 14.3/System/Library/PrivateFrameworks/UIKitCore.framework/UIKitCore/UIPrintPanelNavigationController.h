@protocol UIPrintPanelAppearanceDelegate;

@interface UIPrintPanelNavigationController : UINavigationController

@property (weak, nonatomic) id<UIPrintPanelAppearanceDelegate> appearanceDelegate;

- (void)__viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_presentationControllerDidDismiss:(id)a0;

@end
