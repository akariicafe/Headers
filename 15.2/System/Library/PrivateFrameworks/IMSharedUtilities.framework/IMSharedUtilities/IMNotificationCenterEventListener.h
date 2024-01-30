@class NSString;

@interface IMNotificationCenterEventListener : IMEventListener

@property (readonly, nonatomic) NSString *registeredNotificationName;
@property (readonly) BOOL isRegisteredForNotification;
@property (readonly, copy) NSString *notificationName;
@property (readonly, weak) id notificationObject;

+ (id)eventListenerForNotificationName:(id)a0 object:(id)a1;
+ (id)eventListenerForNotificationName:(id)a0;

- (void)_notification:(id)a0;
- (void).cxx_destruct;
- (void)willReset;
- (void)willStartListening;
- (void)willStopListening;
- (void)registerForNotificationName:(id)a0 object:(id)a1;
- (void)registerForNotificationName:(id)a0;
- (void)dealloc;
- (BOOL)isListening;

@end
