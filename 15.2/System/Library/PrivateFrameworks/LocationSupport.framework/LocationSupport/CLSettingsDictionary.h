@interface CLSettingsDictionary : NSObject

@property (retain, nonatomic) id dictionary;

+ (id)settingsWithDictionary:(id)a0;

- (short)shortForKey:(id)a0 defaultValue:(short)a1;
- (float)floatForKey:(id)a0 defaultValue:(float)a1;
- (int)intForKey:(id)a0 defaultValue:(int)a1;
- (id)dictionaryForKey:(id)a0 defaultValue:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)arrayForKey:(id)a0 defaultValue:(id)a1;
- (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (id)initWithDictionary:(id)a0;
- (id)stringForKey:(id)a0 defaultValue:(id)a1;
- (void)dealloc;
- (BOOL)hasValueForKey:(id)a0;
- (long long)longForKey:(id)a0 defaultValue:(long long)a1;
- (double)doubleForKey:(id)a0 defaultValue:(double)a1;

@end
