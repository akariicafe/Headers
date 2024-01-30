@class NSNumber, NSDate;

@interface CKVCoalescedTask : NSObject {
    NSNumber *_taskId;
    NSNumber *_eventId;
    id /* block */ _runBlock;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL arrivedInCoalescingWindow;

- (void)execute;
- (void)executeAfterDelay:(double)a0 onQueue:(id)a1;
- (id)initWithTaskId:(id)a0 eventId:(id)a1 date:(id)a2 arrivedInCoalescingWindow:(BOOL)a3 eventRegistry:(id)a4 taskBlock:(id /* block */)a5 completion:(id /* block */)a6 completionQueue:(id)a7;
- (id)description;
- (void).cxx_destruct;
- (id /* block */)_runBlockForTask:(id /* block */)a0 eventRegistry:(id)a1 completion:(id /* block */)a2 completionQueue:(id)a3;
- (void)cancel;

@end
