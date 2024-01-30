@class CPLProxyLibraryManager;

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager;

- (void).cxx_destruct;
- (void)cancelTask;

@end
