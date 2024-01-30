@class MPUDataSourceConfiguration;

@interface MPUViewControllerConfiguration : NSObject

@property (readonly, nonatomic) Class cellConfigurationClass;
@property (readonly, nonatomic) Class viewControllerClass;
@property (retain, nonatomic) MPUDataSourceConfiguration *dataSourceConfiguration;
@property (copy, nonatomic) id /* block */ configurationBlock;
@property (nonatomic) BOOL wantsModalPresentation;
@property (nonatomic) BOOL wantsNavigationController;
@property (retain, nonatomic) Class navigationControllerClass;

+ (id)configurationWithViewControllerClass:(Class)a0 cellConfigurationClass:(Class)a1;
+ (id)configurationWithViewControllerClass:(Class)a0;

- (void).cxx_destruct;
- (id)initWithViewControllerClass:(Class)a0 cellConfigurationClass:(Class)a1;
- (id)initWithViewControllerClass:(Class)a0;

@end
