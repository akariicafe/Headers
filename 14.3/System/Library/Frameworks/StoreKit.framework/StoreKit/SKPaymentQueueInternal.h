@class NSString, NSMutableDictionary, SKPaymentQueueClient, SKXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SKPaymentQueueDelegate;

@interface SKPaymentQueueInternal : NSObject {
    BOOL _checkedIn;
    BOOL _isRedemptionSheetShowing;
    BOOL _isRefreshing;
    BOOL _restoreFinishedDuringRefresh;
    BOOL _restoringCompletedTransactions;
    NSString *_identifier;
    SKPaymentQueueClient *_client;
    NSMutableDictionary *_downloads;
    NSMutableArray *_localTransactions;
    NSMutableArray *_transactions;
    NSMutableArray *_weakObservers;
    NSObject<OS_dispatch_queue> *_observerQueue;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    id<SKPaymentQueueDelegate> _delegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
