@class NSUserDefaults, NSMutableDictionary;

@interface ADDeviceConfiguration : NSObject {
    NSUserDefaults *_globalUserDefaults;
    NSUserDefaults *_appleDepthUserDefaults;
    NSMutableDictionary *_currentDefaults;
}

+ (id)numberForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (id)listForKey:(id)a0;
+ (id)sharedConfiguration;
+ (float)floatForKey:(id)a0;
+ (id)getDefaultConfiguration;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (BOOL)createPropertyForKey:(id)a0;
- (void)updateValue:(id)a0 forKey:(id)a1;

@end
