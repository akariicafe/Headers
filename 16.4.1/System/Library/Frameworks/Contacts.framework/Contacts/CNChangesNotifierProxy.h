@class NSCountedSet, NSString, NSMapTable, NSMutableDictionary, NSObject, CNCoalescingTimer;
@protocol CNSchedulerProvider, CNContactsLoggerProvider, OS_dispatch_queue;

@interface CNChangesNotifierProxy : NSObject <CNChangeNotificationReceiver> {
    NSMapTable *_removalBlocks;
    NSMapTable *_notifyingBlocks;
    id<CNSchedulerProvider> _schedulerProvider;
    id<CNContactsLoggerProvider> _loggerProvider;
    NSMutableDictionary *_notificationForwardingMapping;
    NSCountedSet *_supressedNotificationNames;
    NSMutableDictionary *_notificationsToBeSentOnceAllowed;
    NSObject<OS_dispatch_queue> *_notifierQueue;
    CNCoalescingTimer *_coalescingTimer;
    NSString *_coalescingNotificationName;
}

@property (nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications;
@property (nonatomic) double externalNotificationCoalescingDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
