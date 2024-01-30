@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CalAccumulatingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    id /* block */ _block;
    float _delay;
    BOOL _executionPending;
}

- (void).cxx_destruct;
- (void)executeBlock;
- (void)updateTags:(id)a0;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1 delay:(float)a2;
- (void)updateTags:(id)a0 withContext:(id)a1;
- (void)updateTagsAndExecuteBlock:(id)a0 withContext:(id)a1;
- (void)updateTagsAndExecuteBlock:(id)a0;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1;

@end
