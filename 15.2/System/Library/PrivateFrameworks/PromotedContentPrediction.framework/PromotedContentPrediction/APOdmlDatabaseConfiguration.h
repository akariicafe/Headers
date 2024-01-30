@interface APOdmlDatabaseConfiguration : APOdmlSingleton

@property (readonly, nonatomic) BOOL isDaemonProcess;

+ (id)sharedInstance;

- (id)init;
- (void)setProcessToDaemon;

@end
