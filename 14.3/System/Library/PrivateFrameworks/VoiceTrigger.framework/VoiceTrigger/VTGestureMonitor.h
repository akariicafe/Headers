@protocol VTGestureMonitorDelegate;

@interface VTGestureMonitor : NSObject

@property (weak, nonatomic) id<VTGestureMonitorDelegate> delegate;

+ (id)defaultGestureMonitor;

- (void).cxx_destruct;
- (void)startObserving;

@end
