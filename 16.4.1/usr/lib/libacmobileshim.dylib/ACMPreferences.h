@class NSString;
@protocol ACMPreferencesStore;

@interface ACMPreferences : NSObject <ACMBasePreferences>

@property (retain) id<ACMPreferencesStore> preferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPreferencesValue:(id)a0 forKey:(id)a1;
- (id)preferencesValueForKey:(id)a0;
- (void)dealloc;
- (id)multiplePreferencesValuesForKeys:(id)a0;
- (id)multiplePreferencesValuesForKeys:(id)a0 withOptions:(long long)a1;
- (id)preferencesValueForKey:(id)a0 withOptions:(long long)a1;
- (void)setMultiplePreferencesValues:(id)a0;
- (void)setMultiplePreferencesValues:(id)a0 withOptions:(long long)a1;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1 withOptions:(long long)a2;

@end
