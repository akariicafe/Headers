@class CPLProxyLibraryManager;

@interface CPLProxyForceSyncTask : CPLForceSyncTask

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager;

- (void).cxx_destruct;
- (void)cancelTask;

@end
