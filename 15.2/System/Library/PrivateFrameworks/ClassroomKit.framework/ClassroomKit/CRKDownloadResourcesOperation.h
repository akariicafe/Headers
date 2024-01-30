@class NSURLSession, NSArray, NSString, NSURLCredential, NSMutableArray;
@protocol CRKIdentity;

@interface CRKDownloadResourcesOperation : CATOperation <NSURLSessionDownloadDelegate> {
    NSURLSession *mSession;
    NSArray *mDownloadTasks;
    NSMutableArray *mFileURLs;
    NSMutableArray *mCompletedUnitCounts;
}

@property (readonly, nonatomic) NSURLCredential *credential;
@property (readonly, nonatomic) id<CRKIdentity> clientIdentity;
@property (readonly, copy, nonatomic) NSArray *trustedCertificates;
@property (readonly, copy, nonatomic) NSArray *resources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (BOOL)isAsynchronous;
- (void)run;
- (void)main;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)operationWillFinish;
- (void)cancel;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithResources:(id)a0 clientIdentity:(id)a1 trustedCertificates:(id)a2;
- (void)cancelIfNeeded;
- (id)moveURLToNonEphemeralLocation:(id)a0 withFileName:(id)a1 error:(id *)a2;
- (void)unzipOperationDidFinish:(id)a0 forRequestURL:(id)a1;
- (void)finalizeDownloadedItem:(id)a0 forRequestURL:(id)a1;
- (id)initWithResources:(id)a0 clientIdentity:(id)a1 trustedAnchorCertificates:(id)a2;

@end
