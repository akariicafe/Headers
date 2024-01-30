@class NSArray, NSURL, NTKBundleLoader, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKColorBundleLoader : NSObject

@property (retain, nonatomic) NTKBundleLoader *bundleLoader;
@property (retain, nonatomic) NSURL *colorBundlesDirectory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *colorBundleSource;
@property (retain, nonatomic) NSArray *sortedBundles;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)loadColorBundles;
- (void)_startMonitoringColorBundlesDirectoryIfNeeded;
- (id)sortedBundles:(id)a0;

@end
