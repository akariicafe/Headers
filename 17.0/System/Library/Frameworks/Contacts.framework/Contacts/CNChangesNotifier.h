@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject

@property (retain, nonatomic) CNChangesNotifierProxy *notifierProxy;

+ (id)sharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (void)flushSharedNotifier;

- (void)dealloc;
- (void)willSaveChanges;
- (id)initWithNotificationWrapper:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
- (void)waitForCurrentTasksToFinish;
- (void)didSaveChangesSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
- (void).cxx_destruct;
- (void)didChangeMeContactSuccessfully:(BOOL)a0 fromContactStore:(id)a1 requestIdentifier:(id)a2;
- (void)setExternalNotificationCoalescingDelay:(double)a0;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)a0;

@end
