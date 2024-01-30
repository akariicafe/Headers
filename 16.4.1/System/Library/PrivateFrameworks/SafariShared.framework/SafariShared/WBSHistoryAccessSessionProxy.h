@class NSObject, WBSHistoryConnectionProxy;
@protocol WBSHistoryAccessSessionProtocol, OS_dispatch_queue;

@interface WBSHistoryAccessSessionProxy : NSObject {
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id<WBSHistoryAccessSessionProtocol> _historyAccessSession;
    NSObject<OS_dispatch_queue> *_historyAccessSessionAccessQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_getHistoryAccessSessionWithCompletionHandler:(id /* block */)a0;
- (void)getHistoryItemsVisitedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)getHistoryVisitsAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;

@end
