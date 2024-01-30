@class WBSHistoryService, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistoryAccessSession : NSObject <WBSHistoryAccessSessionProtocol> {
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithHistoryService:(id)a0;
- (void)getHistoryItemsVisitedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)getHistoryVisitsAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;

@end
