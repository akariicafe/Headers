@class NSMutableDictionary, SCRActivityScheduler;
@protocol SCRTaskSchedulerDelegate;

@interface SCRTaskScheduler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    SCRActivityScheduler *_activityScheduler;
    NSMutableDictionary *_activityForTask;
}

@property (weak, nonatomic) id<SCRTaskSchedulerDelegate> delegate;

- (id)initWithTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)cancelTaskWithIdentifier:(id)a0;
- (void)_performTaskWithIdentifier:(id)a0;
- (void)completeTaskWithIdentifier:(id)a0;
- (void)scheduleTaskWithIdentifier:(id)a0 withConfiguration:(id)a1;

@end
