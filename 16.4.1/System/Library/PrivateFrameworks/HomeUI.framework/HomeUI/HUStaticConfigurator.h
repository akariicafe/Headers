@class NSArray;

@interface HUStaticConfigurator : HUConfigurator

@property (copy, nonatomic) NSArray *staticViewControllers;

- (void).cxx_destruct;
- (id)_nextViewControllerForResults:(id)a0;
- (id)initWithConfiguratorDelegate:(id)a0 contentViewControllers:(id)a1;
- (id)initWithConfiguratorDelegate:(id)a0 viewControllers:(id)a1;

@end
