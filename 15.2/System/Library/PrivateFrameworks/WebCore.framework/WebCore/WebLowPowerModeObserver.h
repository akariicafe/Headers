@interface WebLowPowerModeObserver : NSObject

@property (nonatomic) void *notifier;
@property (readonly, nonatomic) BOOL isLowPowerModeEnabled;

- (id)initWithNotifier:(void *)a0;
- (void)dealloc;
- (void)_didReceiveLowPowerModeChange;

@end
