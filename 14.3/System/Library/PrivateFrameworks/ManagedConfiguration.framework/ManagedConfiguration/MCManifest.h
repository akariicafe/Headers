@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCManifest : NSObject {
    NSString *_systemFilePath;
    NSString *_userFilePath;
    NSMutableDictionary *_systemManifest;
    NSMutableDictionary *_userManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)installedProfileWithIdentifier:(id)a0;
+ (id)installedProfileDataWithIdentifier:(id)a0;
+ (id)installedUserProfileWithIdentifier:(id)a0;
+ (id)installedSystemProfileWithIdentifier:(id)a0;
+ (id)installedUserProfileDataWithIdentifier:(id)a0;
+ (id)installedSystemProfileDataWithIdentifier:(id)a0;
+ (void)_setSystemManifestPath:(id)a0 userManifestPath:(id)a1;
+ (id)sharedManifest;

- (id)installedProfileWithIdentifier:(id)a0;
- (id)installedProfileDataWithIdentifier:(id)a0;
- (id)installedUserProfileWithIdentifier:(id)a0;
- (id)installedSystemProfileWithIdentifier:(id)a0;
- (void)invalidateCache;
- (void)addIdentifierToSystemManifest:(id)a0 flag:(int)a1;
- (id)allInstalledUserProfileIdentifiers;
- (id)init;
- (id)userManifest;
- (void).cxx_destruct;
- (void)dealloc;
- (id)allInstalledSystemProfileIdentifiers;
- (id)_userManifest;
- (void)removeIdentifierFromUserManifest:(id)a0 flag:(int)a1;
- (void)_adjustManifestIdentifier:(id)a0 isUserInstall:(BOOL)a1 flag:(int)a2 addingIdentifier:(BOOL)a3;
- (id)installedMDMProfile;
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)a0;
- (id)allInstalledPayloadsOfClass:(Class)a0;
- (id)systemManifest;
- (id)identifiersOfProfilesWithFilterFlags:(int)a0;
- (id)_systemManifest;
- (void)removeIdentifierFromSystemManifest:(id)a0 flag:(int)a1;
- (id)allInstalledProfileIdentifiers;
- (void)addIdentifierToUserManifest:(id)a0 flag:(int)a1;
- (void)_setSystemManifest:(id)a0 userManifest:(id)a1;

@end
