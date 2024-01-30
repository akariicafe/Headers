@class CPLProxyLibraryManager;

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask

@property (retain, nonatomic) CPLProxyLibraryManager *proxyLibraryManager;

- (void)cancelTask;
- (void).cxx_destruct;

@end
