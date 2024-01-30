@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {
    BOOL _relinquished;
    BSEventQueue *_eventQueue;
}

@property (readonly, copy, nonatomic) NSString *reason;

- (id)initWithEventQueue:(id)a0 reason:(id)a1;
- (void)relinquish;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end
