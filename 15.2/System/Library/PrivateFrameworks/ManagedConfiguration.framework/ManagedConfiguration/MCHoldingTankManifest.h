@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCHoldingTankManifest : NSObject {
    NSMutableDictionary *_universalManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedManifest;

- (void).cxx_destruct;
- (id)uninstalledProfileDataWithIdentifier:(id)a0 targetDevice:(unsigned long long)a1;
- (id)init;
- (id)_pathToHoldingTankDirectoryForDevice:(unsigned long long)a0;
- (void)_createDirectory:(id)a0 withIntermediateDirectories:(BOOL)a1;
- (id)_profileDataFileNameForProfileIdentifier:(id)a0;
- (id)_pathToHoldingTankManifestForDevice:(unsigned long long)a0;
- (id)_manifestForDevice:(unsigned long long)a0 createIfNil:(BOOL)a1;
- (BOOL)_adjustManifestForDevice:(unsigned long long)a0 withIdentifier:(id)a1 addingIdentifer:(BOOL)a2 outError:(id *)a3;
- (id)pathToHoldingTankProfileDataForIdentifier:(id)a0 targetDevice:(unsigned long long)a1 createDirectory:(BOOL)a2;
- (id)uninstalledProfileWithIdentifier:(id)a0 targetDevice:(unsigned long long)a1;
- (BOOL)addProfileData:(id)a0 withIdentifier:(id)a1 toHoldingTankForDevice:(unsigned long long)a2 outError:(id *)a3;
- (void)removeProfileDataWithIdentifier:(id)a0 fromHoldingTankForDevice:(unsigned long long)a1;
- (void)dealloc;
- (id)uninstalledProfileIdentifiersForDevice:(unsigned long long)a0;

@end
