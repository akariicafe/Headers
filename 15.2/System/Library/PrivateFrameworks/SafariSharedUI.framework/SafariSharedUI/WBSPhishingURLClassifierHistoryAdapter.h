@class WBSHistory, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPhishingURLClassifierHistoryAdapter : NSObject <WBSPhishingURLClassifier> {
    WBSHistory *_history;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)initWithHistory:(id)a0;
- (void)classifyURL:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
