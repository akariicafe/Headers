@class NSTimer, NCNotificationViewController;

@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider

@property (nonatomic) double fireTime;
@property (retain, nonatomic) NSTimer *tickTimer;
@property (retain, nonatomic) NCNotificationViewController *viewController;

- (void).cxx_destruct;
- (void)dealloc;
- (id)secondaryText;
- (id)title;
- (void)invalidateTimer;
- (id)_formatDuration:(double)a0;
- (void)_tickTimerFired:(id)a0;
- (id)initWithNotificationRequest:(id)a0 viewController:(id)a1;

@end
