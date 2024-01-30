@class NSString;

@interface ATXAppLaunchLogger : ATXAbstractVersionedDatabase <ATXPeriodicLoggerSource> {
    BOOL _enabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (long long)latestVersion;
- (void)logAppLaunchFrom:(unsigned long long)a0 at:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (id)createCustomSchema;
- (id)getMetrics;

@end
