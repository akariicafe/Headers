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

- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1;
- (void)executeBlock;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1 delay:(float)a2;
- (void)updateTags:(id)a0 withContext:(id)a1;
- (void)updateTagsAndExecuteBlock:(id)a0 withContext:(id)a1;
- (void)updateTags:(id)a0;
- (void)updateTagsAndExecuteBlock:(id)a0;

@end
