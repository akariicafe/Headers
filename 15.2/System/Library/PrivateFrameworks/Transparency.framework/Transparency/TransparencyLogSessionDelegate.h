@class KTContextStore, KTLogClient, NSString, NSObject, TransparencyManagedDataStore;
@protocol OS_dispatch_workloop;

@interface TransparencyLogSessionDelegate : NSObject <NSURLSessionDelegate>

@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSObject<OS_dispatch_workloop> *workloop;
@property (retain) KTContextStore *contextStore;
@property (weak) KTLogClient *logClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (id)initWithDataStore:(id)a0 workloop:(id)a1;
- (void)handleDownloadRecord:(id)a0 downloadData:(id)a1 downloadMetadata:(id)a2;
- (void).cxx_destruct;
- (void)handleDownloadRecordFailure:(id)a0 task:(id)a1 downloadMetadata:(id)a2 error:(id)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
