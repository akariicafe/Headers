@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (id)init;
- (void)loadLoggingPrefs;
- (void)setLoggingEntitledApp:(BOOL)a0;
- (BOOL)isSensitiveLoggingAllowed;
- (BOOL)isRPILoggingAllowed;

@end
