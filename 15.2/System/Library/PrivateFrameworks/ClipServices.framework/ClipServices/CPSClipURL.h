@class NSURL;

@interface CPSClipURL : NSObject

@property (class, readonly, nonatomic, getter=isSupported) BOOL supported;
@property (class, readonly, nonatomic) BOOL usesDemoMetadata;
@property (class, readonly, nonatomic) BOOL shouldStallProgress;

@property (readonly, nonatomic) NSURL *URL;

+ (void)stopStallingCurrentInstallationWithCompletionHandler:(id /* block */)a0;

- (void)openWithCompletionHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)checkAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)prewarmClipWithCompletionHandler:(id /* block */)a0;
- (void)cancelPrewarmingClipWithCompletionHandler:(id /* block */)a0;
- (void)installClipWithCompletionHandler:(id /* block */)a0;
- (void)fetchClipMetadataWithCompletionHandler:(id /* block */)a0;
- (void)test_uninstallClipWithCompletionHandler:(id /* block */)a0;

@end
