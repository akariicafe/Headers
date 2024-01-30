@class NSUserDefaults;

@interface HAPreferences : NSObject {
    NSUserDefaults *_globalDefaults;
}

@property (readonly) BOOL sensitiveLoggingEnabled;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
