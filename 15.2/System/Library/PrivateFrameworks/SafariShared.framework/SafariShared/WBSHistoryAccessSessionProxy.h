@class NSObject, WBSHistoryConnectionProxy;
@protocol WBSHistoryAccessSessionProtocol, OS_dispatch_queue;

@interface WBSHistoryAccessSessionProxy : NSObject {
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id<WBSHistoryAccessSessionProtocol> _historyAccessSession;
    NSObject<OS_dispatch_queue> *_historyAccessSessionAccessQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)getHistoryItemsVisitedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)getHistoryVisitsAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)_getHistoryAccessSessionWithCompletionHandler:(id /* block */)a0;

@end
