@class NSString, NSUserDefaults;

@interface WeatherUserDefaults : NSObject <WeatherPreferencesPersistence>

@property (retain) NSUserDefaults *userDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)stringForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (BOOL)synchronize;
- (id)dictionaryForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
