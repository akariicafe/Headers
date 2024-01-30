@class NSString;

@interface MCLNotificationCenterObserver : NSObject

@property (copy, nonatomic) NSString *notification;
@property (retain, nonatomic) id object;
@property (nonatomic) BOOL enabled;

- (void)setup;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)observeNotification:(id)a0;

@end
