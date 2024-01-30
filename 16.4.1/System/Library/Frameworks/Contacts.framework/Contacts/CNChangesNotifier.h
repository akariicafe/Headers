@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)sharedNotifier;

- (void)willSaveChanges;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;
- (void)dealloc;
- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)waitForCurrentTasksToFinish;
- (void).cxx_destruct;

@end
