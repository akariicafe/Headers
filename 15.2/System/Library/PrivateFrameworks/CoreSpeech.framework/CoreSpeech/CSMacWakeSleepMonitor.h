@interface CSMacWakeSleepMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)deviceIsInSleep;

@end
