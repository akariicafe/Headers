@class NSString, BRCDeadlineScheduler, NSObject;
@protocol OS_dispatch_workloop;

@interface BRCDeadlineSource : NSObject {
    long long _deadline;
    BRCDeadlineScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSString *_name;
}

@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (copy, nonatomic) id /* block */ eventHandler;

- (void)cancel;
- (void).cxx_destruct;
- (void)signal;
- (id)description;
- (void)resume;
- (void)suspend;
- (id)initWithScheduler:(id)a0 name:(id)a1;
- (void)signalWithDeadline:(long long)a0;
- (BOOL)willRunEvenHandler;
- (void)runEventHandler;

@end
