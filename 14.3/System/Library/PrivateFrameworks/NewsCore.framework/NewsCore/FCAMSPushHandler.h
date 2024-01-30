@class NFLazy;

@interface FCAMSPushHandler : NSObject

@property (retain, nonatomic) NFLazy *lazyHandler;

- (void)handleNotificationResponse:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldHandleNotification:(id)a0;
- (void)handleNotification:(id)a0;
- (BOOL)shouldHandleNotificationResponse:(id)a0;

@end
