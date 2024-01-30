@interface IDSSysdiagnoseLogCollector : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_collectSysdiagnoseLog:(id /* block */)a0;
- (void)collectSysdiagnoseLog:(id /* block */)a0;

@end
