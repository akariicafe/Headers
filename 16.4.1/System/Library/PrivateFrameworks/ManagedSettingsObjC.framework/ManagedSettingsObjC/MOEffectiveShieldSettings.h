@class MOEffectiveCategoryShieldPolicy, MOEffectiveArray, NSXPCConnection;

@interface MOEffectiveShieldSettings : NSObject

@property (class, readonly) NSXPCConnection *xpcConnection;

@property (readonly) MOEffectiveArray *applications;
@property (readonly) MOEffectiveCategoryShieldPolicy *applicationCategoryPolicy;
@property (readonly) MOEffectiveArray *webDomains;
@property (readonly) MOEffectiveCategoryShieldPolicy *webDomainCategoryPolicy;

+ (id)configurationForBundleIdentifier:(id)a0 categoryIdentifier:(id)a1 categoryName:(id)a2 error:(id *)a3;
+ (id)configurationForCategoryIdentifier:(id)a0 categoryName:(id)a1 error:(id *)a2;
+ (id)configurationForWebDomain:(id)a0 categoryIdentifier:(id)a1 categoryName:(id)a2 error:(id *)a3;
+ (void)handleAction:(long long)a0 bundleIdentifier:(id)a1 categoryIdentifier:(id)a2 completionHandler:(id /* block */)a3;
+ (void)handleAction:(long long)a0 categoryIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)handleAction:(long long)a0 webDomain:(id)a1 categoryIdentifier:(id)a2 completionHandler:(id /* block */)a3;

@end
