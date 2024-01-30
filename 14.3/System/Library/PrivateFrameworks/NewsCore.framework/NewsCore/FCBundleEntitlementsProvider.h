@protocol FCEntitlementsOverrideProviderType, FCCoreConfigurationManager;

@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType>

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (retain, nonatomic) id<FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;

- (id)initWithConfigurationManager:(id)a0;
- (void).cxx_destruct;
- (void)_fetchEntitlementsWithIgnoreCache:(BOOL)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)fetchEntitlementsWithIgnoreCache:(BOOL)a0 completion:(id /* block */)a1;

@end
