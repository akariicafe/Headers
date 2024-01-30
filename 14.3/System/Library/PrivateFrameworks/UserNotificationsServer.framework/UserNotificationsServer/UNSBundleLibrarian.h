@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UNSBundleLibrarian : NSObject {
    NSString *_bundleLibraryPath;
    NSMutableDictionary *_bundleToUUIDMap;
    NSMutableDictionary *_uuidToBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (BOOL)_queue_saveDictionary:(id)a0 atPath:(id)a1;
- (void)removeMappingForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifierForBundleIdentifier:(id)a0;
- (void)_queue_addEntryForBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1;
- (id)bundleIdentifierForUniqueIdentifier:(id)a0;
- (id)_queue_bundleIdentifierForUniqueIdentifier:(id)a0;
- (id)_queue_dictionaryAtPath:(id)a0;
- (void)migrateRepositoriesInDirectory:(id)a0;
- (void)_queue_loadBundleLibrary;
- (void)_removeBundleLibrary;
- (id)initWithDirectory:(id)a0;
- (id)_queue_uniqueIdentifierForBundleIdentifier:(id)a0;
- (void)_queue_removeEntryForBundleIdentifier:(id)a0;
- (void)bootstrapLibraryForBundleIdentifiers:(id)a0;
- (void)_queue_loadBundleLibraryIfNeeded;
- (id)_queue_dataAtPath:(id)a0;

@end
