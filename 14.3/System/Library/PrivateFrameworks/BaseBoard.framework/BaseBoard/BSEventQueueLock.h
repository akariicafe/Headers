@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {
    BOOL _relinquished;
    BSEventQueue *_eventQueue;
}

@property (readonly, copy, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (void)dealloc;
- (void)relinquish;
- (id)description;
- (id)initWithEventQueue:(id)a0 reason:(id)a1;

@end
