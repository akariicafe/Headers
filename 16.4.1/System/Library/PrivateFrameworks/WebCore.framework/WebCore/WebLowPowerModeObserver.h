@interface WebLowPowerModeObserver : NSObject

@property (nonatomic) void *notifier;
@property (readonly, nonatomic) BOOL isLowPowerModeEnabled;

- (void)dealloc;
- (id)initWithNotifier:(void *)a0;
- (void)_didReceiveLowPowerModeChange;

@end
