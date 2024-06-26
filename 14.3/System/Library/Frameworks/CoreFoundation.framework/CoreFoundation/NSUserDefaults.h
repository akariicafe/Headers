@interface NSUserDefaults : NSObject {
    id _kvo_;
    struct __CFString { } *_identifier_;
    struct __CFString { } *_container_;
    void *_reserved[2];
}

+ (id)standardUserDefaults;
+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)resetStandardUserDefaults;
+ (void)setStandardUserDefaults:(id)a0;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;

- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)initWithUser:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (oneway void)release;
- (id)searchList;
- (void)dealloc;
- (id)stringForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (void)removePersistentDomainForName:(id)a0;
- (void)_willBeginKeyValueObserving;
- (BOOL)objectIsForcedForKey:(id)a0 inDomain:(id)a1;
- (void)_didEndKeyValueObserving;
- (void)setURL:(id)a0 forKey:(id)a1;
- (void)setSearchList:(id)a0;
- (void)addSuiteNamed:(id)a0;
- (void)setPersistentDomain:(id)a0 forName:(id)a1;
- (void)removeObjectForKey:(id)a0 inDomain:(id)a1;
- (void)removeVolatileDomainForName:(id)a0;
- (id)_initWithSuiteName:(id)a0 container:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (void)setLong:(long long)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)persistentDomainForName:(id)a0;
- (long long)integerForKey:(id)a0;
- (void)setVolatileDomain:(id)a0 forName:(id)a1;
- (id)volatileDomainForName:(id)a0;
- (void)removeSuiteNamed:(id)a0;
- (id)persistentDomainNames;
- (BOOL)objectIsForcedForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)dictionaryForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)finalize;
- (id)volatileDomainNames;
- (id)stringArrayForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (long long)longForKey:(id)a0;
- (id)objectForKey:(id)a0 inDomain:(id)a1;
- (id)arrayForKey:(id)a0;
- (void)registerDefaults:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (float)floatForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithSuiteName:(id)a0;
- (double)doubleForKey:(id)a0;
- (struct __CFString { } *)_container;
- (BOOL)_observingCFPreferences;
- (void)_setContainer:(struct __CFURL { } *)a0;
- (struct __CFString { } *)_identifier;
- (void)_setIdentifier:(struct __CFString { } *)a0;

@end
