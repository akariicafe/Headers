@interface CSUserSessionActiveMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)isUserActive;

@end
