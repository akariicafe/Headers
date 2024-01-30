@class NSError, NSString, NSDictionary, CRKHostResourcesConfiguration, NSMutableDictionary, NSNetService, NSMutableSet;
@protocol CRKHostResourcesOperationDelegate;

@interface CRKHostResourcesOperation : CATOperation <NSNetServiceDelegate, CATRemoteConnectionDelegate> {
    CRKHostResourcesConfiguration *mConfiguration;
    NSDictionary *mFileURLsByFilePath;
    NSMutableDictionary *mStartedDownloadCountByFileURL;
    NSMutableDictionary *mFinishedDownloadCountByFileURL;
    NSNetService *mNetService;
    NSMutableSet *mConnections;
    BOOL mPublished;
    NSMutableSet *mConnectionCloseTimers;
    NSError *mStashedError;
    NSMutableDictionary *mZipOperationsByDirectoryURL;
}

@property (nonatomic, getter=isObservingIPAddress) BOOL observingIPAddress;
@property (weak, nonatomic) id<CRKHostResourcesOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)main;
- (void)connectionDidClose:(id)a0;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isAsynchronous;
- (void)connection:(id)a0 didInterruptWithError:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)netService:(id)a0 didAcceptConnectionWithInputStream:(id)a1 outputStream:(id)a2;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidPublish:(id)a0;
- (void)netServiceDidStop:(id)a0;
- (void)operationDidFinish;
- (void)connection:(id)a0 didFailToSendDataWithStream:(id)a1 userInfo:(id)a2 error:(id)a3;
- (void)connection:(id)a0 didReceiveDataRequestWithURL:(id)a1;
- (void)connection:(id)a0 didSendDataWithStream:(id)a1 userInfo:(id)a2;
- (void)IPAddressDidChange;
- (BOOL)allDownloadsFinished;
- (void)connectionCloseDidTimeout:(id)a0;
- (void)delegateDownloadFinished:(id)a0 fileURL:(id)a1 error:(id)a2;
- (void)delegateDownloadStarted:(id)a0 fileURL:(id)a1;
- (void)delegateResourcesDidPublish;
- (BOOL)downloadAllowedForFileURL:(id)a0;
- (id)hostingSocketOptions;
- (void)incrementFinishedDownloadCountForFileURL:(id)a0;
- (void)incrementStartedDownloadCountForFileURL:(id)a0;
- (id)initWithResourceURLs:(id)a0 serverIdentity:(id)a1 trustedAnchorCertificates:(id)a2;
- (id)initWithResourceURLs:(id)a0 serverIdentity:(id)a1 trustedAnchorCertificates:(id)a2 maximumAllowedDownloads:(unsigned long long)a3;
- (id)initWithResourceURLs:(id)a0 serverIdentity:(id)a1 trustedAnchorCertificates:(id)a2 maximumAllowedDownloads:(unsigned long long)a3 port:(unsigned short)a4;
- (void)serveItemAtURL:(id)a0 toConnection:(id)a1 forRequestURL:(id)a2 originalItemURL:(id)a3;
- (void)zipDirectoryAtURL:(id)a0 completion:(id /* block */)a1;
- (void)zipOperationDidFail:(id)a0 directoryURL:(id)a1;

@end
