@class NSString;

@interface HKPluginProxyProvider : HKProxyProvider

@property (readonly, nonatomic) NSString *pluginIdentifier;

- (id)initWithHealthStore:(id)a0 pluginIdentifier:(id)a1 exportedObject:(id)a2;
- (void)fetchProxyServiceEndpointForIdentifier:(id)a0 healthStore:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)fetchPluginProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;

@end
