@interface WebBackgroundTaskController : NSObject

@property (nonatomic) unsigned long long invalidBackgroundTaskIdentifier;
@property (copy, nonatomic) id /* block */ backgroundTaskStartBlock;
@property (copy, nonatomic) id /* block */ backgroundTaskEndBlock;

+ (id)sharedController;

- (void)dealloc;
- (unsigned long long)startBackgroundTaskWithExpirationHandler:(id /* block */)a0;
- (void)endBackgroundTaskWithIdentifier:(unsigned long long)a0;

@end
