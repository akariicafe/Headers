@interface HVScheduledTasks : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _delayedBudgetedTaskScheduled;
}

+ (void)registerScheduledTasks;
+ (void)delayedBudgetedContentAvailable;

- (id)init;

@end
