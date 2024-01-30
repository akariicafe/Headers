@class NSBackgroundActivityScheduler;

@interface ANBackgroundActivity : NSObject <ANBackgroundActivityProtocol>

@property (readonly, nonatomic) NSBackgroundActivityScheduler *backgroundActivity;

- (BOOL)shouldDefer;
- (void).cxx_destruct;
- (id)init;
- (void)scheduleWithBlock:(id /* block */)a0;

@end
