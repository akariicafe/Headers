@class NSString, NSSet, NSArray, NSMutableSet;

@interface PXSettings : PTSettings {
    NSMutableSet *_archivedSettings;
    NSSet *_cachedTransientProperties;
    BOOL _hasUserDefaultsOverrides;
}

@property (class, copy, nonatomic) NSString *suiteName;
@property (class, readonly, nonatomic) NSSet *transientProperties;

@property (readonly, nonatomic) PXSettings *parentSettings;
@property (readonly, nonatomic) NSArray *reparentedRootSettings;
@property (readonly, nonatomic) BOOL hasUserDefaultsOverrides;
@property (readonly, nonatomic) BOOL hasDefaultValues;
@property (nonatomic) long long version;

+ (id)sharedInstance;
+ (id)createSharedInstance;
+ (id)_userDefaults;
+ (id)_defaultsKey;
+ (BOOL)ignoresKey:(id)a0;
+ (id)_signatureDictionaryWithDefaultSettings:(id *)a0;

- (void).cxx_destruct;
- (void)save;
- (void)clearManualOverrides;
- (void)defaultValueDidChangeForKey:(id)a0;
- (void)restoreDefaultValues;
- (void)addDeferredKeyObserver:(id)a0;
- (id)archiveValueForKey:(id)a0;
- (void)performPostSaveActions;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;
- (BOOL)_isTransientKey:(id)a0;
- (void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)a0 andArchivedDefaultValues:(id)a1 defaultSettings:(id)a2;
- (BOOL)_setOverrideValuesFromDictionary:(id)a0;
- (void)_willArchiveSettings:(id)a0;
- (void)_validateArchivableValue:(id)a0 forKey:(id)a1;
- (void)addDeferredKeyPathObserver:(id)a0;
- (void)addKeyPathObserver:(id)a0;
- (void)removeKeyPathObserver:(id)a0;
- (void)addKeyObserver:(id)a0;
- (void)removeKeyObserver:(id)a0;
- (id)archiveDictionary;

@end
