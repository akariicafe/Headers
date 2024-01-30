@class NSUserDefaults, NSMutableDictionary;

@interface ADDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_currentDefaults;
}

+ (id)defaults;
+ (long long)logLevel;
+ (id)intermediatePathOverride;
+ (id)getDefaultValues;
+ (BOOL)jasperColorStillsRunCorrection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
