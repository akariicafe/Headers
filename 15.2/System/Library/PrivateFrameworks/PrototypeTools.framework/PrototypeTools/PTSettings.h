@class NSString, PTSettingsClassStructure, NSHashTable;
@protocol _PTSettingsRestoreDefaultsObserver;

@interface PTSettings : NSObject <PTSettingsKeyPathObserver, NSCopying> {
    PTSettingsClassStructure *__classStructure;
    NSHashTable *__keyObservers;
    NSHashTable *__keyPathObservers;
    id<_PTSettingsRestoreDefaultsObserver> __restoreDefaultsObserver;
    BOOL __observationEnabled;
    BOOL __isObservingProperties;
    BOOL __isObservingChildren;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_supportsArchivingCustomClass:(Class)a0;
+ (BOOL)_supportsArchivingStructType:(id)a0;
+ (id)_archiveDictionaryForObject:(id)a0 ofCustomClass:(Class)a1;
+ (id)_archiveDictionaryForValue:(id)a0 ofStructType:(id)a1;
+ (id)_objectOfCustomClass:(Class)a0 fromArchiveDictionary:(id)a1;
+ (id)_valueOfStructType:(id)a0 fromArchiveDictionary:(id)a1;
+ (BOOL)ignoresKey:(id)a0;
+ (id)settingsControllerModule;
+ (id)settingsFromArchiveDictionary:(id)a0;
+ (unsigned long long)settingsVersionNumber;
+ (id)emptyArchiveForSettingsClassName:(id)a0;
+ (void)_applyArchiveValue:(id)a0 forKeyPath:(id)a1 toArchive:(id)a2;

- (void)createChildren;
- (void)setDefaultValues;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)restoreDefaultValues;
- (void)applySettings:(id)a0;
- (id)_allKeys;
- (void)_setObservationEnabled:(BOOL)a0;
- (id)archiveValueForKey:(id)a0;
- (id)initWithDefaultValues;
- (void).cxx_destruct;
- (id)init;
- (id)module;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)drillDownSummary;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (void)removeKeyPathObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addKeyObserver:(id)a0;
- (void)dealloc;
- (void)addKeyPathObserver:(id)a0;
- (id)archiveDictionary;
- (void)removeKeyObserver:(id)a0;
- (BOOL)_hasObservers;
- (void)restoreFromArchiveDictionary:(id)a0;
- (void)invalidateValueForKey:(id)a0;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;
- (id)_initWithClassStructure:(id)a0;
- (void)_createChildrenAndOutlets;
- (void)_sendWillRestoreDefaults;
- (void)_applyArchiveDictionary:(id)a0;
- (void)_sendDidRestoreDefaults;
- (id)_createChildForKey:(id)a0;
- (BOOL)_applyArchiveValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_createChildren;
- (void)_createOutlets;
- (void)_validateChildren;
- (id)_ensureChildForKey:(id)a0;
- (void)_stopObservingProperties;
- (void)_stopObservingChildren;
- (id)_initWithArchiveDictionary:(id)a0;
- (id)_allChildAndLeafKeys;
- (void)_safeSetValue:(id)a0 forLeafKey:(id)a1;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_sendKeyChanged:(id)a0;
- (void)_sendKeyPathChanged:(id)a0;
- (BOOL)_applyArchiveValue:(id)a0 forLeafKey:(id)a1 error:(id *)a2;
- (id)_archiveValueForLeafKey:(id)a0;
- (void)_enumerateChildrenWithBlock:(id /* block */)a0;
- (BOOL)_hasKeyPathObservers;
- (void)_startObservingProperties;
- (void)_startObservingChildren;
- (BOOL)_getChild:(id *)a0 create:(BOOL)a1 leafKey:(id *)a2 forKeyPath:(id)a3 error:(id *)a4;
- (id)_keyForChild:(id)a0;
- (void)_setRestoreDefaultsObserver:(id)a0;
- (void)_enumerateOutletsWithBlock:(id /* block */)a0;
- (id)_archiveValueForKeyPath:(id)a0;

@end
