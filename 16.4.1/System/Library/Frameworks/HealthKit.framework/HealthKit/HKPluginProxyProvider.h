@class NSString;

@interface HKPluginProxyProvider : HKProxyProvider

@property (readonly, nonatomic) NSString *pluginIdentifier;

- (void)fetchProxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)fetchPluginProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)proxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 error:(id *)a2;
- (id)initWithHealthStore:(id)a0 pluginIdentifier:(id)a1 exportedObject:(id)a2;

@end
