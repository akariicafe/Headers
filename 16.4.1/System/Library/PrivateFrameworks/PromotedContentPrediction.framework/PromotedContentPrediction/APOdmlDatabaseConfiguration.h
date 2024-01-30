@interface APOdmlDatabaseConfiguration : APOdmlSingleton

@property (readonly, nonatomic) BOOL isDaemonProcess;

+ (id)sharedInstance;

- (void)setProcessToDaemon;
- (id)init;

@end
