@interface PFLCKNetworkHandler : NSObject <PFLNetworkHandler>

- (void)downloadConfigurationWithCompletion:(id /* block */)a0;
- (void)downloadModelForTask:(id)a0 completion:(id /* block */)a1;
- (void)uploadResultsForIdentifier:(id)a0 deviceResults:(id)a1 completion:(id /* block */)a2;

@end
