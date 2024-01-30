@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSVMediaContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    unsigned long long _currentResponseRevisionID;
    unsigned long long _lastNotificationReceivedResponseRevisionID;
    BOOL _havePendingRetryOperation;
    int _itemsDidChangeNotifyToken;
    int _exponentialBackOffSeconds;
    long long _pendingMutateRequestCount;
    NSMutableDictionary *_playlistGlobalIDToContentTasteItem;
    NSMutableDictionary *_playlistGlobalIDToPendingContentTasteItem;
    NSMutableDictionary *_contentTasteItemsToRetry;
    NSMutableDictionary *_storeAdamIDToContentTasteItem;
    NSMutableDictionary *_storeAdamIDToPendingContentTasteItem;
}

+ (id)defaultMediaTasteController;

- (void).cxx_destruct;
- (id)init;
- (void)_refreshContentTasteItems;
- (void)_contentTasteForItemUpdate:(id)a0 finishedWithError:(id)a1;
- (void)dealloc;
- (void)_sendUpdateWithItemUpdates:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleContentTasteItemsUpdateResponse:(id)a0 allowNotifications:(BOOL)a1;
- (BOOL)_isRetryableError:(id)a0;
- (void)_scheduleContentTasteUpdateOperationForFailedItems;
- (void)_retryOperationForItemUpdates:(id)a0 finishedWithError:(id)a1;
- (unsigned long long)contentTasteTypeForPlaylistGlobalID:(id)a0;
- (unsigned long long)contentTasteTypeForStoreAdamID:(long long)a0;
- (void)setContentTasteType:(unsigned long long)a0 forPlaylistGlobalID:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setContentTasteType:(unsigned long long)a0 forStoreAdamID:(long long)a1 withContentType:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
