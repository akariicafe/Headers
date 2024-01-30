@class WBSHistory, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPhishingURLClassifierHistoryAdapter : NSObject <WBSPhishingURLClassifier> {
    WBSHistory *_history;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithHistory:(id)a0;
- (void).cxx_destruct;
- (void)classifyURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
