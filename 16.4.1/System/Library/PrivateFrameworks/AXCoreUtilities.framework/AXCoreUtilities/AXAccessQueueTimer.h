@class NSString, AXAccessQueue, NSObject;
@protocol OS_dispatch_source;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer>

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) int state;
@property (retain, nonatomic) AXAccessQueue *accessQueue;
@property (nonatomic) BOOL accessQueueIsExternal;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (copy) NSString *label;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timerTargettingMainAccessQueue;

- (void)afterDelay:(double)a0 processReadingBlock:(id /* block */)a1;
- (void)cancel;
- (void)dealloc;
- (void)_reallyCancel;
- (id)init;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)afterDelay:(double)a0 processWritingBlock:(id /* block */)a1;
- (id)initWithTargetAccessQueue:(id)a0;
- (void)_afterDelay:(double)a0 processBlock:(id /* block */)a1 shouldTreatAsWritingBlock:(BOOL)a2;
- (void)_didFinishProcessingBlock;
- (void)_performEnqueuedWritingBlock:(id /* block */)a0 asynchronousExecutionWarningHandler:(SEL)a1;
- (void)_warnAboutAsynchronousCancelling;
- (void)_warnAboutAsynchronousScheduling;

@end
