@class NSString, NSMutableArray;

@interface SORequestQueue : NSObject {
    NSString *_identifier;
    NSMutableArray *_queue;
    id _processingItem;
}

@property (copy, nonatomic) id /* block */ processItemBlock;

+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:(id)a0;
+ (void)removeQueueWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void)enqueueRequest:(id)a0;
- (void).cxx_destruct;
- (void)_processItem:(id)a0;
- (void)_itemCompleted;
- (void)processNextRequest;
- (void)removeAllRequestsWithBlock:(id /* block */)a0;
- (unsigned long long)queueCount;

@end
