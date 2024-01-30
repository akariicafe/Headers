@class NSDictionary, FPXDomainContext;

@interface FPXServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating> {
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}

- (void).cxx_destruct;
- (void)getListenerEndpointForServiceName:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithServiceSources:(id)a0 domainContext:(id)a1;

@end
