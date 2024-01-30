@protocol UIPrintPanelAppearanceDelegate;

@interface UIPrintPanelNavigationController : UINavigationController

@property (weak, nonatomic) id<UIPrintPanelAppearanceDelegate> appearanceDelegate;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (void)_presentationControllerDidDismiss:(id)a0;

@end
