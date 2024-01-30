@class NSString;

@interface ATXAppLaunchLogger : ATXNotificationsDatabase <ATXPeriodicLoggerSource> {
    BOOL _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)logAppLaunchFrom:(unsigned long long)a0 at:(id)a1;
- (id)getMetrics;
- (id)_init;
- (id)createCustomSchema;
- (long long)latestVersion;
- (void)setEnabled:(BOOL)a0;

@end
