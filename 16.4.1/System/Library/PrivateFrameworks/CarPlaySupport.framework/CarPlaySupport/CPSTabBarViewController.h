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

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)restoresFocusAfterTransition;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (BOOL)tabBarController:(id)a0 shouldSelectViewController:(id)a1;
- (void)_nowPlayingButtonTapped;
- (void)applicationDidBecomeNowPlayingApp:(BOOL)a0;
- (id)initWithTabBarTemplate:(id)a0 templateDelegate:(id)a1 templateEnvironment:(id)a2;
- (void)showNowPlayingButton:(BOOL)a0;
- (id)tabBarTemplate;
- (id)tabBarTemplateDelegate;

@end
