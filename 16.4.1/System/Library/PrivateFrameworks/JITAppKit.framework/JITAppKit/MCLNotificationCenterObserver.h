@class NSString;

@interface MCLNotificationCenterObserver : NSObject

@property (copy, nonatomic) NSString *notification;
@property (retain, nonatomic) id object;
@property (nonatomic) BOOL enabled;

- (void)setup;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeNotification:(id)a0;

@end
