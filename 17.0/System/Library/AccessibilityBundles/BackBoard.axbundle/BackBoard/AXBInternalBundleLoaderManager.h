@interface AXBInternalBundleLoaderManager : NSObject

+ (void)initializeMonitor;

- (id)init;
- (void)_loadInternalBundle;

@end
