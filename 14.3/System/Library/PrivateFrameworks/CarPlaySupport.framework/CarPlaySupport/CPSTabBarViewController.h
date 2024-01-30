@class CPSTemplateEnvironment, NAFuture, CPTemplate, NSArray, NSString;
@protocol CPTemplateDelegate;

@interface CPSTabBarViewController : UITabBarController <UITabBarControllerDelegate, CPSTemplateEnvironmentDelegate, CPSBaseTemplateViewController, CPTabBarTemplateProviding>

@property (weak, nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (readonly, nonatomic) NAFuture *templateProviderFuture;
@property (retain, nonatomic) CPTemplate *associatedTemplate;
@property (retain, nonatomic) id<CPTemplateDelegate> templateDelegate;
@property (readonly, nonatomic) NSArray *tabBarButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)restoresFocusAfterTransition;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (void)invalidate;
- (void)applicationDidBecomeNowPlayingApp:(BOOL)a0;
- (id)initWithTabBarTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2;
- (void)showNowPlayingButton:(BOOL)a0;
- (void)_nowPlayingButtonTapped;
- (id)tabBarTemplateDelegate;
- (id)tabBarTemplate;

@end
