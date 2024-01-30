@class NSMutableDictionary;

@interface ADCoreDefaults : NSObject

@property (retain, nonatomic) NSMutableDictionary *factoryDefaults;
@property (nonatomic) struct __CFString { } *defaultsBundleID;

+ (id)sharedInstance;
+ (void)setDouble:(double)a0 forKey:(id)a1;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (void)setArray:(id)a0 forKey:(id)a1;
+ (void)setInteger:(long long)a0 forKey:(id)a1;
+ (BOOL)defaultIsSetForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (void)setString:(id)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (void)_setDefaultValue:(id)a0 forKey:(id)a1;
+ (void)addFactoryDefaults:(id)a0;
+ (id)_defaultValueForKey:(id)a0 valueClass:(Class)a1;
+ (id)arrayForKey:(id)a0;
+ (id)factoryDefaults;
+ (double)doubleForKey:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
