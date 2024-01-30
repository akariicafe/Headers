@class IMDoubleLinkedList;
@protocol IMEventNotificationQueueDelegate;

@interface IMEventNotificationQueue : NSObject

@property (readonly, nonatomic) IMDoubleLinkedList *eventNotificationList;
@property (readonly, getter=isScheduled) BOOL scheduled;
@property (weak) id<IMEventNotificationQueueDelegate> delegate;
@property (readonly, getter=isBusy) BOOL busy;
@property (readonly) long long count;
@property (getter=isPaused) BOOL paused;

- (id)init;
- (void).cxx_destruct;
- (void)cancelEventNotificationsForNotificationTarget:(id)a0;
- (void)cancelAllEventNotifications;
- (void)pushEventTarget:(id)a0 eventNotificationBlock:(id /* block */)a1;
- (void)appendEventTarget:(id)a0 eventNotificationBlock:(id /* block */)a1;
- (void)pushEventTarget:(id)a0 sender:(id)a1 eventNotificationBlock:(id /* block */)a2;
- (void)appendEventTarget:(id)a0 sender:(id)a1 eventNotificationBlock:(id /* block */)a2;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)_processQueue;
- (void)_dispatchProcessQueue;
- (void)_didChangeBusyState:(BOOL)a0;
- (void)_invokeEvent:(id)a0;
- (void)_willProcessQueue;
- (void)_invokeNotifications;
- (void)_didProcessQueue;
- (void)_didAddNotification:(id)a0;
- (void)_didCancelNotifications;
- (void)appendEventNotification:(id)a0;
- (void)pushEventNotification:(id)a0;
- (void)_scheduleIfNeeded:(BOOL)a0;
- (void)_didChangePausedState:(BOOL)a0;
- (BOOL)containsNotificationTarget:(id)a0;
- (void)_setBusy:(BOOL)a0;

@end
