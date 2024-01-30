@interface WLLogController : NSObject {
    BOOL _loggingEnabled;
}

+ (id)sharedLogger;

- (id)init;
- (BOOL)_loggingEnabled;
- (void)_reloadLogPreferences;
- (void)logMessageFromAddress:(void *)a0 withLevel:(unsigned long long)a1 format:(id)a2 args:(char *)a3;

@end
