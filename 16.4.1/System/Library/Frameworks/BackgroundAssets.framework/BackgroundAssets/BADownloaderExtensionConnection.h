@class NSString, NSXPCConnection, NSObject;
@protocol BADownloaderExtension, OS_dispatch_queue;

@interface BADownloaderExtensionConnection : NSExtensionContext <BADownloaderExtensionSyncProtocol, _EXMainConnectionHandler, _EXConnectionHandler> {
    NSObject<OS_dispatch_queue> *_extensionWorkQueue;
    NSXPCConnection *_daemonConnection;
}

@property (retain) id<BADownloaderExtension> principalObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)initWithPrincipalObject:(id)a0;
- (void).cxx_destruct;
- (void)backgroundDownload:(id)a0 failedWithError:(id)a1 completionHandler:(id /* block */)a2;
- (void)backgroundDownload:(id)a0 finishedWithSandboxToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)downloadsForRequest:(long long)a0 manifestURL:(id)a1 manifestToken:(id)a2 extensionInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)extensionWillTerminate;
- (void)receivedAuthenticationChallenge:(id)a0 download:(id)a1 completionHandler:(id /* block */)a2;
- (void)wakeupForTokenWithReply:(id /* block */)a0;

@end
