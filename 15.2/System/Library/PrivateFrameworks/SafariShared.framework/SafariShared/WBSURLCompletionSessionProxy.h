@class NSObject, WBSHistoryConnectionProxy;
@protocol WBSURLCompletionSessionProtocol, OS_dispatch_queue;

@interface WBSURLCompletionSessionProxy : NSObject {
    WBSHistoryConnectionProxy *_historyConnectionProxy;
    id<WBSURLCompletionSessionProtocol> _completionSession;
    NSObject<OS_dispatch_queue> *_completionSessionAccessQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)getBestMatchesForTypedString:(id)a0 limit:(unsigned long long)a1 forQueryID:(long long)a2 withSearchParameters:(id)a3 completionHandler:(id /* block */)a4;
- (void)_completionSessionWithCompletionHandler:(id /* block */)a0;
- (void)userDidSelectCompletionMatch:(id)a0 forTypedString:(id)a1;

@end
