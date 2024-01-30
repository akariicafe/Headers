@interface HKHealthRecordsDaemonProxyProvider : HKProxyProvider

- (void)fetchProxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (id)initWithConnection:(id)a0 serviceIdentifier:(id)a1 exportedObject:(id)a2;
- (id)proxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 error:(id *)a2;

@end
