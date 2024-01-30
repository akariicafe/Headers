@class NSString;

@interface MCLNotificationCenterObserver : NSObject

@property (copy, nonatomic) NSString *notification;
@property (retain, nonatomic) id object;
@property (nonatomic) BOOL enabled;

- (void)setup;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeNotification:(id)a0;

@end
