@class NSTimer, NCNotificationViewController;

@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider

@property (nonatomic) double fireTime;
@property (retain, nonatomic) NSTimer *tickTimer;
@property (retain, nonatomic) NCNotificationViewController *viewController;

- (id)title;
- (void)invalidateTimer;
- (id)initWithNotificationRequest:(id)a0 viewController:(id)a1;
- (id)_formatDuration:(double)a0;
- (id)date;
- (id)secondaryText;
- (void).cxx_destruct;
- (void)_tickTimerFired:(id)a0;
- (void)dealloc;

@end
