@class NSObject, NSMutableArray, RBEventQueueEvent;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RBEventQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_eventTimer;
    BOOL _isProcessingEvents;
    BOOL _inModifyBlock;
    BOOL _dirtyDuringModify;
}

@property (readonly, nonatomic) NSMutableArray *events;
@property (readonly, nonatomic) RBEventQueueEvent *nextEvent;
@property (readonly, nonatomic) unsigned long long count;

- (void)addEvent:(id)a0;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)removeEvents:(id)a0;
- (void)addEvents:(id)a0;
- (void)removeEvent:(id)a0;
- (void)batchModify:(id /* block */)a0;

@end
