@class NSString, UIViewController, NSMutableArray;
@protocol HUConfiguratorDelegate, HUConfigurationViewController;

@interface HUConfigurator : NSObject <HUConfigurationViewControllerDelegate>

@property (weak, nonatomic) id<HUConfiguratorDelegate> configuratorDelegate;
@property (readonly, nonatomic) UIViewController<HUConfigurationViewController> *currentViewController;
@property (readonly, nonatomic) NSMutableArray *displayedViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewController:(id)a0 didFinishWithConfigurationResults:(id)a1;
- (void)viewControllerDidGoBack:(id)a0;
- (id)initWithConfiguratorDelegate:(id)a0 initialViewController:(id)a1;
- (void)viewControllerWillAppear:(id)a0;
- (id)_nextViewControllerForResults:(id)a0;
- (void)_addViewControllerToDisplay:(id)a0;
- (void)_removeDisplayedViewController;
- (void)pushViewControllerForResults:(id)a0;
- (void)popViewController;

@end
