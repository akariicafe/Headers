@class HKObserverSet, NSMutableDictionary, NSObject, HDDaemon;
@protocol OS_dispatch_queue, HDProfileManagerObserver;

@interface HDProfileManager : NSObject {
    HDDaemon *_daemon;
    NSMutableDictionary *_profiles;
    HKObserverSet<HDProfileManagerObserver> *_observers;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

- (void)invalidateAndWait;
- (void)_resourceQueue_loadSecondaryProfiles;
- (BOOL)_resourceQueue_deleteProfile:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)newProfileWithIdentifier:(id)a0 daemon:(id)a1 directoryPath:(id)a2;
- (id)createProfileOfType:(long long)a0 displayName:(id)a1 error:(id *)a2;
- (void)removeObserver:(id)a0;
- (void)dispatchProfileListDidChange;
- (void)_resourceQueue_addProfile:(id)a0 dispatchChangeNotification:(BOOL)a1;
- (void)addObserver:(id)a0;
- (BOOL)deleteProfile:(id)a0 error:(id *)a1;
- (id)allProfileIdentifiers;
- (id)_directoryURLForProfileIdentifier:(id)a0;
- (id)_resourceQueue_profileForIdentifier:(id)a0;
- (BOOL)createProfileForIdentifier:(id)a0 displayName:(id)a1 error:(id *)a2;
- (id)_resourceQueue_createProfileOfType:(long long)a0 UUID:(id)a1 name:(id)a2 error:(id *)a3;
- (id)profileAssociatedWithNRDeviceUUID:(id)a0;
- (id)profileForIdentifier:(id)a0;
- (id)initWithDaemon:(id)a0;
- (void)addProfile:(id)a0;
- (id)_directoryNameForProfileIdentifier:(id)a0;
- (void)reloadSecondaryProfiles;
- (id)profileIdentifierForUUID:(id)a0;
- (id)_profileIdentifierForDirectoryName:(id)a0 error:(id *)a1;

@end
