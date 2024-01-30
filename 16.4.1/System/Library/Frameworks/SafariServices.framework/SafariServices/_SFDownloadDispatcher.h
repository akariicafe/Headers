@class NSString, NSMapTable;

@interface _SFDownloadDispatcher : NSObject <_WKDownloadDelegate> {
    NSMapTable *_activeDownloadMap;
    NSMapTable *_pendingDownloadMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDownloadDispatcher;

- (id)init;
- (void).cxx_destruct;
- (void)_download:(id)a0 decideDestinationWithSuggestedFilename:(id)a1 completionHandler:(id /* block */)a2;
- (void)_download:(id)a0 didFailWithError:(id)a1;
- (void)_download:(id)a0 didReceiveResponse:(id)a1;
- (void)_download:(id)a0 didWriteData:(unsigned long long)a1 totalBytesWritten:(unsigned long long)a2 totalBytesExpectedToWrite:(unsigned long long)a3;
- (void)_downloadDidCancel:(id)a0;
- (void)_downloadDidFinish:(id)a0;
- (void)_downloadDidStart:(id)a0;
- (void)_downloadProcessDidCrash:(id)a0;
- (id)downloadFromWKDownload:(id)a0 userInitiatedAction:(id)a1;
- (id)prepareForDownloadFromWebView:(id)a0 request:(id)a1 MIMEType:(id)a2 uti:(id)a3 userInitiatedAction:(id)a4;
- (void)registerResumedDownload:(id)a0;
- (void)setPendingDownload:(id)a0 forWebView:(id)a1;
- (id)startDownloadForCurrentURLFromWebView:(id)a0;
- (id)startDownloadFromWebView:(id)a0 URL:(id)a1;

@end
