@class NSArray, NSString, NSProgress, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol _UIDataTransferMonitorDelegate;

@interface _UIDataTransferMonitor : NSObject <NSItemProviderDataTransferDelegate, NSProgressReporting> {
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

@property (weak, nonatomic) id<_UIDataTransferMonitorDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *outstandingRequests;
@property (readonly, nonatomic) unsigned long long outstandingItemsCount;
@property (readonly, nonatomic) unsigned long long totalItemsCount;
@property (nonatomic) BOOL suppressEventsUntilRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)itemProvider:(id)a0 beganDataTransferTransactionUUID:(id)a1 progress:(id)a2;
- (void)itemProvider:(id)a0 finishedDataTransferTransactionUUID:(id)a1;
- (unsigned long long)totalItemsCount;
- (void).cxx_destruct;
- (id)init;
- (void)setSuppressEventsUntilRequested:(BOOL)a0;
- (void)sendDelegateEventsIfNeeded;
- (void)cancelOutstandingRequests;
- (void)_transferQueue_sendBeganCallback;
- (void)_transferQueue_scheduleBeganCallback;
- (void)_transferQueue_sendFinishedCallback;
- (void)_transferQueue_recomputeMasterProgress;
- (void)_transferQueue_scheduleFinishedCallback;
- (BOOL)suppressEventsUntilRequested;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
