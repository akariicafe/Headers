@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSmartHistorySearcher : NSObject {
    NSArray *_topics;
    NSObject<OS_dispatch_queue> *_searchQueue;
}

- (void).cxx_destruct;
- (id)_searchItemsInTopic:(id)a0 forText:(id)a1 options:(unsigned long long)a2;
- (id)_searchTopicsForText:(id)a0 options:(unsigned long long)a1;
- (id)initWithTopics:(id)a0;
- (void)performSearchWithText:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
