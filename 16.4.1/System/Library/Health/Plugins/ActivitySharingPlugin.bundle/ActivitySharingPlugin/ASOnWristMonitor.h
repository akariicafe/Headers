@protocol ASOnWristMonitorDelegate;

@interface ASOnWristMonitor : NSObject

@property (weak, nonatomic) id<ASOnWristMonitorDelegate> delegate;

- (void).cxx_destruct;
- (void)getWristState:(id /* block */)a0;

@end
