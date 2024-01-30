@class NSString;

@interface ACMPreferencesCFPreferencesStore : NSObject <ACMPreferencesCFPreferencesBasedStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesStoreWithCFPreferences;

- (void)clearCache;
- (id)allValues;
- (void)removeAllValues;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1;
- (id)preferencesValueForKey:(id)a0;
- (struct __CFString { } *)preferenceID;
- (id)multiplePreferencesValuesForKeys:(id)a0;
- (void)setMultiplePreferencesValues:(id)a0;
- (id)multiplePreferencesValuesForKeys:(id)a0 withOptions:(long long)a1;
- (void)setMultiplePreferencesValues:(id)a0 withOptions:(long long)a1;
- (id)allValuesWithOptions:(long long)a0;
- (void)replaceAllValues:(id)a0 withOptions:(long long)a1;
- (void)removeAllValuesWithOptions:(long long)a0;
- (void)savePreferencesIfNeeded;
- (id)preferencesValueForKey:(id)a0 withOptions:(long long)a1;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1 withOptions:(long long)a2;
- (void)cleanupOnMemoryWarning;

@end
