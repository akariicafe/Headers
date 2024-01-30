@class NSArray;

@interface NSUserDefaults : NSObject {
    id _kvo_;
    struct __CFString { } *_identifier_;
    struct __CFString { } *_container_;
    void *_reserved[2];
}

@property (class, readonly) NSUserDefaults *standardUserDefaults;

@property (readonly, copy) NSArray *volatileDomainNames;

+ (id)standardUserDefaults;
+ (id)_copyStandardUserDefaultsIfPresent;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (id)_web_preferredLanguageCode;
+ (void)setStandardUserDefaults:(id)a0;
+ (void)resetStandardUserDefaults;
+ (void)_web_defaultsDidChange;

- (id)dataForKey:(id)a0;
- (float)floatForKey:(id)a0;
- (id)initWithUser:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithSuiteName:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)dictionaryForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)searchList;
- (long long)integerForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setLong:(long long)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)finalize;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)_didEndKeyValueObserving;
- (void)removePersistentDomainForName:(id)a0;
- (void)setURL:(id)a0 forKey:(id)a1;
- (BOOL)objectIsForcedForKey:(id)a0 inDomain:(id)a1;
- (void)setSearchList:(id)a0;
- (void)addSuiteNamed:(id)a0;
- (void)setVolatileDomain:(id)a0 forName:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)persistentDomainForName:(id)a0;
- (id)URLForKey:(id)a0;
- (id)_initWithSuiteName:(id)a0 container:(id)a1;
- (void)registerDefaults:(id)a0;
- (void)_willBeginKeyValueObserving;
- (id)stringForKey:(id)a0;
- (void)removeSuiteNamed:(id)a0;
- (id)persistentDomainNames;
- (BOOL)objectIsForcedForKey:(id)a0;
- (id)volatileDomainForName:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringArrayForKey:(id)a0;
- (void)setPersistentDomain:(id)a0 forName:(id)a1;
- (void)removeObjectForKey:(id)a0 inDomain:(id)a1;
- (void)removeVolatileDomainForName:(id)a0;
- (id)init;
- (long long)longForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 inDomain:(id)a2;
- (id)objectForKey:(id)a0;
- (BOOL)synchronize;
- (void)dealloc;
- (BOOL)boolForKey:(id)a0;
- (oneway void)release;
- (id)objectForKey:(id)a0 inDomain:(id)a1;
- (id)dictionaryRepresentation;
- (id)_kvo;
- (void)_setKVO:(id)a0;
- (id)volatileDomainNames;
- (BOOL)_observingCFPreferences;
- (void)_setIdentifier:(struct __CFString { } *)a0;
- (struct __CFString { } *)_container;
- (void)_setContainer:(struct __CFURL { } *)a0;
- (struct __CFString { } *)_identifier;

@end
