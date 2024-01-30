@class BKSApplicationStateMonitor;
@protocol TPProcessObserverDelegate;

@interface TPProcessObserver : NSObject

@property (readonly, nonatomic) BKSApplicationStateMonitor *applicationMonitor;
@property (nonatomic) BOOL cachedApplicationRunning;
@property (weak, nonatomic) id<TPProcessObserverDelegate> delegate;

+ (BOOL)isApplicationStateRunning:(unsigned int)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)a0;
- (void)applicationMonitorStateDidChangeForBundleIdentifier:(id)a0;

@end
