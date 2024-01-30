@class CPLProxyLibraryManager;

@interface CPLProxyForceSyncTask : CPLForceSyncTask

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager;

- (void)cancelTask;
- (void).cxx_destruct;

@end
