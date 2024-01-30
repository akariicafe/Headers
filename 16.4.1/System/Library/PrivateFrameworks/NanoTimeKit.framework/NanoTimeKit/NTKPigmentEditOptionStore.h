@class NSString, CLKDevice, NTKPigmentPreferenceManager, NSMutableDictionary, NSDictionary, NTKPlistPigmentEditOptionLoader, NSObject, NTKPigmentPersistentStorageController, NTKFaceColorPalette, NSCache;
@protocol OS_dispatch_queue;

@interface NTKPigmentEditOptionStore : NSObject <NTKPigmentPreferenceManagerDelegate, CLKSensitiveUIStateObserver>

@property (retain, nonatomic) NTKPlistPigmentEditOptionLoader *plistLoader;
@property (retain, nonatomic) NSMutableDictionary *listenersByDomain;
@property (retain, nonatomic) NSCache *cache;
@property (copy, nonatomic) NSDictionary *sharedCollections;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NTKFaceColorPalette *palette;
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController;
@property (retain, nonatomic) NTKPigmentPreferenceManager *preferenceManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) BOOL persistenceCacheEnabled;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL prewarmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sensitiveUIStateChanged;
- (void)resetCache;
- (id)init;
- (void).cxx_destruct;
- (id)_threadunsafe_sharedCollections;
- (BOOL)isCacheRussiaLocaleStateChanged;
- (void)_autoSelectPigmentsForSharedCollections:(id)a0;
- (void)_autoSelectPigmentsFromFacePigmentSet:(id)a0;
- (id)_companion_loadPigmentSetForDomain:(id)a0 bundle:(id)a1;
- (void)_companion_setupPersistentStorage;
- (id)_loadPigmentSetForDomain:(id)a0 bundle:(id)a1;
- (id)_migratedOptionForInvalidOption:(id)a0 collection:(id)a1;
- (id)_normalizeOptionForOption:(id)a0 domain:(id)a1 bundle:(id)a2 slot:(id)a3;
- (void)_setupPlistLoader;
- (void)_threadunsafe_resetCache;
- (id)_watch_loadPigmentSetForDomain:(id)a0 bundle:(id)a1;
- (void)addListener:(id)a0 forDomain:(id)a1;
- (void)colorBundleContentChanged;
- (id)colorOptionsForDomain:(id)a0 bundle:(id)a1 slot:(id)a2;
- (id)defaultColorOptionForDomain:(id)a0 bundle:(id)a1 slot:(id)a2;
- (id)defaultGalleryColorsForDomain:(id)a0 bundle:(id)a1;
- (void)deletePersistenceLayerCache;
- (void)faceBundlesUpdated;
- (id)fulfilledOptionForOption:(id)a0 domain:(id)a1 bundle:(id)a2 slot:(id)a3;
- (void)handleActiveDeviceChangedNotification;
- (BOOL)hasAddableCollectionsForDomain:(id)a0 bundle:(id)a1 slot:(id)a2;
- (unsigned long long)indexOfOption:(id)a0 domain:(id)a1 bundle:(id)a2 slot:(id)a3;
- (BOOL)isOptionVisible:(id)a0;
- (id)migratedOptionForInvalidOption:(id)a0 domain:(id)a1 bundle:(id)a2 slot:(id)a3;
- (void)notifyListenersStoreContentChanged;
- (unsigned long long)numberOfOptionsForDomain:(id)a0 bundle:(id)a1 slot:(id)a2;
- (id)optionAtIndex:(unsigned long long)a0 domain:(id)a1 bundle:(id)a2 slot:(id)a3;
- (void)pigmentPreferenceManagerDidUpdateSelectedColors:(id)a0;
- (id)pigmentSetForDomain:(id)a0 bundle:(id)a1;
- (void)removeListener:(id)a0 forDomain:(id)a1;
- (void)resetCacheAndNotifyListeners;
- (void)savePersistentCacheVersion;
- (void)setIgnoreSensitiveUIItems:(BOOL)a0;
- (void)setIncludesAllDeviceSpecificColors:(BOOL)a0;
- (void)setOption:(id)a0 visible:(BOOL)a1;
- (BOOL)shouldClearPersistanceStoreCache;
- (BOOL)shouldForceResetingPersistentCache;

@end
