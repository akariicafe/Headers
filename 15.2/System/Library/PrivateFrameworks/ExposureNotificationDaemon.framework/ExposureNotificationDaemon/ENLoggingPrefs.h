@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (void)setLoggingEntitledApp:(BOOL)a0;
- (BOOL)isSensitiveLoggingAllowed;
- (void)loadLoggingPrefs;
- (id)init;
- (BOOL)isRPILoggingAllowed;

@end
