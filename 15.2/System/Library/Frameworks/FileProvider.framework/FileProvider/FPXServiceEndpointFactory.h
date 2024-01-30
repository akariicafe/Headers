@class NSDictionary, FPXDomainContext;

@interface FPXServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating> {
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}

- (void)getListenerEndpointForServiceName:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithServiceSources:(id)a0 domainContext:(id)a1;

@end
