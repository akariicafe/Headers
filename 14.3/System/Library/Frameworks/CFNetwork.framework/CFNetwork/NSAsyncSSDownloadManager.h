@class NSString, NSMutableDictionary, NSOperationQueue, SSDownloadManager;

@interface NSAsyncSSDownloadManager : NSObject <SSDownloadManagerObserver> {
    SSDownloadManager *_manager;
    NSOperationQueue *_queue;
    NSMutableDictionary *_downloads;
    BOOL _reconnectInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
