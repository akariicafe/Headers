@class NSBackgroundActivityScheduler;

@interface ANBackgroundActivity : NSObject <ANBackgroundActivityProtocol>

@property (readonly, nonatomic) NSBackgroundActivityScheduler *backgroundActivity;

- (BOOL)shouldDefer;
- (void)scheduleWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
