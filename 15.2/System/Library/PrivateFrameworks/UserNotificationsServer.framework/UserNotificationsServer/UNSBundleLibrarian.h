@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface UNSBundleLibrarian : NSObject {
    NSString *_bundleLibraryPath;
    NSMutableDictionary *_bundleToUUIDMap;
    NSMutableDictionary *_uuidToBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)migrateLibraryFromDirectory:(id)a0 toDirectory:(id)a1;
- (id)_queue_dictionaryAtPath:(id)a0;
- (void)bootstrapLibraryForBundleIdentifiers:(id)a0;
- (id)initWithDirectory:(id)a0;
- (id)_queue_bundleIdentifierForUniqueIdentifier:(id)a0;
- (void)_queue_loadBundleLibrary;
- (BOOL)_isUUIDString:(id)a0;
- (void)_queue_migrateBundleDirectoriesInDirectory:(id)a0;
- (void)_queue_removeEntryForBundleIdentifier:(id)a0;
- (id)uniqueIdentifierForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_queue_uniqueIdentifierForBundleIdentifier:(id)a0;
- (id)_queue_dataAtPath:(id)a0;
- (id)bundleIdentifierForUniqueIdentifier:(id)a0;
- (void)removeMappingForBundleIdentifier:(id)a0;
- (void)_queue_removeUnknownDirectoriesFromLibrary;
- (void)_queue_removeUnknownDirectoriesInDirectory:(id)a0;
- (void)_queue_loadBundleLibraryIfNeeded;
- (void)_queue_addEntryForBundleIdentifier:(id)a0 uniqueIdentifier:(id)a1;
- (void)_removeBundleLibrary;
- (BOOL)_queue_saveDictionary:(id)a0 atPath:(id)a1;

@end
