@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient {
    XBApplicationLaunchCompatibilityInfo *_appInfo;
}

+ (void)preheatServiceWithTimeout:(double)a0;

- (id)initWithApplicationInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned int)generateImageWithContext:(id)a0 captureInfo:(id *)a1 error:(id *)a2;

@end
