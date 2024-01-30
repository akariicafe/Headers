@protocol VTGestureMonitorDelegate;

@interface VTGestureMonitor : NSObject

@property (weak, nonatomic) id<VTGestureMonitorDelegate> delegate;

+ (id)defaultGestureMonitor;

- (void)startObserving;
- (void).cxx_destruct;

@end
