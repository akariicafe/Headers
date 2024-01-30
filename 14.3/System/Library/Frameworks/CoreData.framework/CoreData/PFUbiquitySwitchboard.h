@class NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquitySwitchboard : NSObject {
    NSMutableDictionary *_storeNameToLocalPeerIDToEntry;
    NSMutableDictionary *_rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary *_rootLocationToLocalPeerIDToPreviousEntries;
    NSRecursiveLock *_registrationLock;
}

+ (void)initialize;
+ (id)sharedSwitchboard;
+ (id)ubiquitousExternalReferenceLocationForUUID:(id)a0 inStore:(id)a1;

- (BOOL)registerUbiquitizedPersistentStore:(id)a0 withURL:(id)a1 forLocalPeerID:(id)a2 withLocalRootLocation:(id)a3 andUbiquityRootLocation:(id)a4 error:(id *)a5;
- (id)init;
- (id)retainedEntryForStoreName:(id)a0 andLocalPeerID:(id)a1;
- (void)unregisterCoordinator:(id)a0;
- (void)dealloc;
- (void)unregisterPersistentStore:(id)a0 inCoordinator:(id)a1;
- (void)coordinatorWillRemoveStore:(id)a0;
- (id)description;
- (id)createSetOfCoordinatorsForPersistentStoreName:(id)a0 andLocalPeerID:(id)a1 atUbiquityRootLocation:(id)a2;
- (id)entryForStore:(id)a0;
- (void)_removeFilePresenter:(id)a0;
- (id)filePresenterForUbiquityRootLocation:(id)a0 andLocalPeerID:(id)a1;
- (void)_addFilePresenter:(id)a0;
- (void)addEntryToPreviousEntries:(id)a0;
- (BOOL)cacheFilePresenterForUbiquityRootLocation:(id)a0 andLocalPeerID:(id)a1;
- (void)removeFilePresenterCachedForUbiquityRootLocation:(id)a0 andLocalPeerID:(id)a1;
- (void)removeEntryFromPreviousEntries:(id)a0;
- (void)_quietlyMoveEntryToPreviousEntries:(id)a0;
- (void)releaseAllEntriesForStoreName:(id)a0 andPeerID:(id)a1;

@end
