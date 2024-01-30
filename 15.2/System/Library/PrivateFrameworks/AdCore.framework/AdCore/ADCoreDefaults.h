@class NSMutableDictionary;

@interface ADCoreDefaults : NSObject

@property (retain, nonatomic) NSMutableDictionary *factoryDefaults;
@property (nonatomic) struct __CFString { } *defaultsBundleID;

+ (id)sharedInstance;
+ (void)setArray:(id)a0 forKey:(id)a1;
+ (void)setDouble:(double)a0 forKey:(id)a1;
+ (id)_defaultValueForKey:(id)a0 valueClass:(Class)a1;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (long long)integerForKey:(id)a0;
+ (void)setInteger:(long long)a0 forKey:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1;
+ (id)arrayForKey:(id)a0;
+ (void)_setDefaultValue:(id)a0 forKey:(id)a1;
+ (id)stringForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (void)addFactoryDefaults:(id)a0;
+ (id)factoryDefaults;
+ (BOOL)defaultIsSetForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
