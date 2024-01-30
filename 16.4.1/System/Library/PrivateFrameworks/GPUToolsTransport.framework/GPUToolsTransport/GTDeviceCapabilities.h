@class NSDictionary;

@interface GTDeviceCapabilities : NSObject <GTDeviceCapabilities> {
    NSDictionary *_daemonDeviceCapabilities;
    NSDictionary *_gpuToolsVersionQuery;
}

- (id)init;
- (void).cxx_destruct;
- (id)daemonDeviceCapabilities;
- (id)gpuToolsVersionQuery;
- (id)inferiorEnvironment:(id)a0;

@end
