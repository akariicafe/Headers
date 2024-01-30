@class NSArray, NSString, NSProgress, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol PBDataTransferMonitorDelegate;

@interface PBDataTransferMonitor : NSObject <PBItemCollectionDataTransferDelegate, NSProgressReporting> {
    NSMutableDictionary *_transferQueue_requestsBySourceItemUUID;
    NSMutableSet *_transferQueue_requestsInProgress;
    BOOL _transferQueue_suppressEventsUntilRequested;
    BOOL _transferQueue_shouldSendBeganCallback;
    BOOL _transferQueue_hasSentBeganCallback;
    BOOL _transferQueue_hasSentFinishedCallback;
    BOOL _transferQueue_shouldSendFinishedCallback;
    NSProgress *_transferQueue_masterProgress;
    NSMutableArray *_transferQueue_childProgresses;
    NSMutableSet *_transferQueue_allEncounteredItemUUIDs;
}

@property (weak, nonatomic) id<PBDataTransferMonitorDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *outstandingRequests;
@property (readonly, nonatomic) unsigned long long outstandingItemsCount;
@property (readonly, nonatomic) unsigned long long totalItemsCount;
@property (nonatomic) BOOL suppressEventsUntilRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)totalItemsCount;
- (void)_transferQueue_recomputeMasterProgress;
- (void)_transferQueue_scheduleBeganCallback;
- (void)_transferQueue_scheduleFinishedCallback;
- (void)_transferQueue_sendBeganCallback;
- (void)_transferQueue_sendFinishedCallback;
- (void)cancelOutstandingRequests;
- (void)sendDelegateEventsIfNeeded;
- (void)setSuppressEventsUntilRequested:(BOOL)a0;
- (BOOL)suppressEventsUntilRequested;
- (void)itemCollection:(id)a0 item:(id)a1 representation:(id)a2 beganDataTransferWithProgress:(id)a3;
- (void)itemCollection:(id)a0 item:(id)a1 representationFinishedDataTransfer:(id)a2;

@end
