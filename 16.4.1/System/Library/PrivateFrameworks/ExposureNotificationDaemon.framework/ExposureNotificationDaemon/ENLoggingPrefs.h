@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (BOOL)isSensitiveLoggingAllowed;
- (void)setLoggingEntitledApp:(BOOL)a0;
- (id)init;
- (BOOL)isRPILoggingAllowed;
- (void)loadLoggingPrefs;

@end
