@protocol TRIUrgentRollbackSchedulerProtocol, TRINotificationReactionCheckerProtocol, TRIHotfixRolloutTargetingSchedulerProtocol;

@interface TRIPushNotificationHandler : NSObject <TRIPushServiceConnectionDelegate>

@property (readonly, nonatomic) id<TRINotificationReactionCheckerProtocol> notificationChecker;
@property (readonly, nonatomic) id<TRIHotfixRolloutTargetingSchedulerProtocol> hotfixScheduler;
@property (readonly, nonatomic) id<TRIUrgentRollbackSchedulerProtocol> rollbackScheduler;

- (void)_handleRollbackNotification:(id)a0;
- (id)initWithNotificationChecker:(id)a0 hotfixScheduler:(id)a1 rollbackScheduler:(id)a2;
- (void)_handleDeploymentNotification:(id)a0;
- (BOOL)_isMissingNotificationFields:(id)a0;
- (void).cxx_destruct;
- (void)didReceivePushNotification:(id)a0;

@end
