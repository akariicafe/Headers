@class NSString, NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_os_log;

@interface HDGatedActivity : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _handler;
    NSObject<OS_xpc_object> *_criteria;
    double _nextScheduledFireDeadline;
    BOOL _inProgress;
    NSMutableArray *_pendingCompletions;
}

@property (retain) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly) BOOL shouldDefer;
@property BOOL waitingForTrigger;

- (void)_registerActivityWithCriteria:(id)a0;
- (void).cxx_destruct;
- (void)_handleXPCActivityCallback:(id)a0;
- (id)description;
- (void)_performActivity:(id)a0 completion:(id /* block */)a1;
- (void)_activityFinishedWithResult:(long long)a0 error:(id)a1;
- (id)initWithName:(id)a0 criteria:(id)a1 loggingCategory:(id)a2 handler:(id /* block */)a3;
- (void)requestRunWithMaximumDelay:(double)a0 completion:(id /* block */)a1;
- (void)runUngatedWithCompletion:(id /* block */)a0;

@end
