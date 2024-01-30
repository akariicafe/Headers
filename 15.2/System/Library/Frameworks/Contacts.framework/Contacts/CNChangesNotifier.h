@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (void)flushSharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)sharedNotifier;

- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (void)willSaveChanges;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (void).cxx_destruct;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)dealloc;
- (void)waitForCurrentTasksToFinish;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;

@end
