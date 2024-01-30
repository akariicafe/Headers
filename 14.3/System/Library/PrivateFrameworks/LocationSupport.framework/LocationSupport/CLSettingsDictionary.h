@interface CLSettingsDictionary : NSObject

@property (retain, nonatomic) id dictionary;

+ (id)settingsWithDictionary:(id)a0;

- (float)floatForKey:(id)a0 defaultValue:(float)a1;
- (id)dictionaryForKey:(id)a0 defaultValue:(id)a1;
- (id)arrayForKey:(id)a0 defaultValue:(id)a1;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;
- (double)doubleForKey:(id)a0 defaultValue:(double)a1;
- (long long)longForKey:(id)a0 defaultValue:(long long)a1;
- (int)intForKey:(id)a0 defaultValue:(int)a1;
- (void)dealloc;
- (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasValueForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (short)shortForKey:(id)a0 defaultValue:(short)a1;

@end
