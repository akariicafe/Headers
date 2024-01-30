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

+ (id)settingsControllerModule;
+ (BOOL)ignoresKey:(id)a0;
+ (id)_archiveDictionaryForObject:(id)a0 ofCustomClass:(Class)a1;
+ (id)_archiveDictionaryForValue:(id)a0 ofStructType:(id)a1;
+ (id)_objectOfCustomClass:(Class)a0 fromArchiveDictionary:(id)a1;
+ (BOOL)_supportsArchivingCustomClass:(Class)a0;
+ (BOOL)_supportsArchivingStructType:(id)a0;
+ (id)_valueOfStructType:(id)a0 fromArchiveDictionary:(id)a1;
+ (id)settingsFromArchiveDictionary:(id)a0;
+ (void)_applyArchiveValue:(id)a0 forKeyPath:(id)a1 toArchive:(id)a2;
+ (id)emptyArchiveForSettingsClassName:(id)a0;
+ (unsigned long long)settingsVersionNumber;

- (void)createChildren;
- (id)archiveValueForKey:(id)a0;
- (id)module;
- (void)setDefaultValues;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setObservationEnabled:(BOOL)a0;
- (void)applySettings:(id)a0;
- (void)restoreDefaultValues;
- (id)init;
- (id)drillDownSummary;
- (void).cxx_destruct;
- (id)initWithDefaultValues;
- (void)addKeyObserver:(id)a0;
- (void)addKeyPathObserver:(id)a0;
- (id)archiveDictionary;
- (void)removeKeyObserver:(id)a0;
- (void)removeKeyPathObserver:(id)a0;
- (BOOL)_hasObservers;
- (void)invalidateValueForKey:(id)a0;
- (id)_allKeys;
- (void)restoreFromArchiveDictionary:(id)a0;
- (BOOL)suppressesIntrospectionOnCustomerInstalls;
- (void)_createChildren;
- (id)_allChildAndLeafKeys;
- (void)_applyArchiveDictionary:(id)a0;
- (BOOL)_applyArchiveValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)_applyArchiveValue:(id)a0 forLeafKey:(id)a1 error:(id *)a2;
- (id)_archiveValueForKeyPath:(id)a0;
- (id)_archiveValueForLeafKey:(id)a0;
- (id)_createChildForKey:(id)a0;
- (void)_createChildrenAndOutlets;
- (void)_createOutlets;
- (id)_ensureChildForKey:(id)a0;
- (void)_enumerateChildrenWithBlock:(id /* block */)a0;
- (void)_enumerateOutletsWithBlock:(id /* block */)a0;
- (BOOL)_getChild:(id *)a0 create:(BOOL)a1 leafKey:(id *)a2 forKeyPath:(id)a3 error:(id *)a4;
- (BOOL)_hasKeyPathObservers;
- (id)_initWithArchiveDictionary:(id)a0;
- (id)_initWithClassStructure:(id)a0;
- (id)_keyForChild:(id)a0;
- (void)_safeSetValue:(id)a0 forLeafKey:(id)a1;
- (void)_sendDidRestoreDefaults;
- (void)_sendKeyChanged:(id)a0;
- (void)_sendKeyPathChanged:(id)a0;
- (void)_sendWillRestoreDefaults;
- (void)_setRestoreDefaultsObserver:(id)a0;
- (void)_startObservingChildren;
- (void)_startObservingProperties;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_stopObservingChildren;
- (void)_stopObservingProperties;
- (void)_validateChildren;

@end
