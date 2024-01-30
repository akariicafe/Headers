@class NSString;

@interface MPUViewControllerFactory : NSObject <MPUViewControllerFactory, UIViewControllerRestoration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;
+ (id)viewControllerForIdentifier:(id)a0;
+ (id)dataSourceForViewControllerIdentifier:(id)a0 withQuery:(id)a1;
+ (id)configurationForViewControllerIdentifier:(id)a0;
+ (void)registerViewControllerIdentifier:(id)a0 withConfiguration:(id)a1;
+ (id)viewControllerForIdentifier:(id)a0 withQuery:(id)a1;
+ (id)viewControllerForIdentifier:(id)a0 withDataSource:(id)a1;
+ (id)_existingViewControllerWithRestorationIdentifierPath:(id)a0;
+ (id)dataSourceForViewControllerIdentifier:(id)a0;
+ (void)registerViewControllerIdentifier:(id)a0 withConfigurationBlock:(id /* block */)a1;
+ (void)registerViewControllerIdentifiers;
+ (id)_allConfigurations;


@end
