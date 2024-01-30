@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCManifest : NSObject {
    NSString *_systemFilePath;
    NSString *_userFilePath;
    NSMutableDictionary *_systemManifest;
    NSMutableDictionary *_userManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)installedSystemProfileDataWithIdentifier:(id)a0;
+ (id)installedProfileDataWithIdentifier:(id)a0;
+ (id)installedSystemProfileWithIdentifier:(id)a0;
+ (id)installedUserProfileDataWithIdentifier:(id)a0;
+ (id)installedProfileWithIdentifier:(id)a0;
+ (id)installedUserProfileWithIdentifier:(id)a0;
+ (id)sharedManifest;
+ (void)_setSystemManifestPath:(id)a0 userManifestPath:(id)a1;

- (void)invalidateCache;
- (id)installedProfileDataWithIdentifier:(id)a0;
- (id)installedSystemProfileWithIdentifier:(id)a0;
- (id)installedProfileWithIdentifier:(id)a0;
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)a0;
- (id)_userManifest;
- (id)_systemManifest;
- (id)systemManifest;
- (void)removeIdentifierFromSystemManifest:(id)a0 flag:(int)a1;
- (void)_setSystemManifest:(id)a0 userManifest:(id)a1;
- (id)allInstalledSystemProfileIdentifiers;
- (id)identifiersOfProfilesWithFilterFlags:(int)a0;
- (id)userManifest;
- (id)allInstalledPayloadsOfClass:(Class)a0;
- (void)addIdentifierToSystemManifest:(id)a0 flag:(int)a1;
- (id)installedUserProfileWithIdentifier:(id)a0;
- (void)_adjustManifestIdentifier:(id)a0 isUserInstall:(BOOL)a1 flag:(int)a2 addingIdentifier:(BOOL)a3;
- (void)dealloc;
- (void)addIdentifierToUserManifest:(id)a0 flag:(int)a1;
- (id)init;
- (id)allInstalledProfileIdentifiers;
- (void).cxx_destruct;
- (id)allInstalledUserProfileIdentifiers;
- (id)installedMDMProfile;
- (void)removeIdentifierFromUserManifest:(id)a0 flag:(int)a1;

@end
