@class NSString, NSXPCConnection, PLPhotoLibrary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetsdCPLResourceDownloader : NSObject {
    PLPhotoLibrary *_photoLibrary;
    NSString *_trustedCallerBundleID;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_pendingCPLDownloadsIsolationQueue;
    NSMutableDictionary *_pendingCPLDownloads;
}

- (void)_handleInvalidation;
- (void)handleInvalidation;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)startCPLDownloadForAsset:(id)a0 resourceType:(unsigned long long)a1 masterResourceOnly:(BOOL)a2 highPriority:(BOOL)a3 track:(BOOL)a4 notify:(BOOL)a5 transient:(BOOL)a6 proposedTaskIdentifier:(id)a7 doneToken:(id)a8 error:(id *)a9;
- (void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)a0 downloadContext:(id)a1;
- (id)initWithPhotoLibrary:(id)a0 trustedCallerBundleID:(id)a1 clientConnection:(id)a2;
- (void).cxx_destruct;
- (void)cancelCPLDownloadTasks:(id)a0 completionHandler:(id /* block */)a1;

@end
