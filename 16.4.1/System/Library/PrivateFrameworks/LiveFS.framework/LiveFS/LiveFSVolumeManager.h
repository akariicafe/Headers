@class NSCondition, NSMutableDictionary, NSObject;
@protocol LiveFSVolumeManagerDelegate;

@interface LiveFSVolumeManager : NSObject <LiveFSVolumeManager> {
    NSObject<LiveFSVolumeManagerDelegate> *delegate;
    NSMutableDictionary *listeners;
    NSMutableDictionary *descriptions;
    NSCondition *l;
    BOOL _initDone;
}

+ (id)newServiceProxyObjectWithDelegate:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addDisk:(id)a0 fileSystemType:(id)a1 reply:(id /* block */)a2;
- (void)addDisk:(id)a0 reply:(id /* block */)a1;
- (void)ejectDisk:(id)a0 usingFlags:(unsigned int)a1 reply:(id /* block */)a2;
- (void)listVolumes:(id /* block */)a0;
- (void)unlockVolume:(id)a0 password:(id)a1 saveToKeychain:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)addShimForFileSystemType:(id)a0 parameters:(id)a1 reply:(id /* block */)a2;
- (void)addVolume:(id)a0 atServer:(id)a1 credentialType:(long long)a2 credential:(id)a3 reply:(id /* block */)a4;
- (void)addVolume:(id)a0 listener:(id)a1 description:(id)a2 reply:(id /* block */)a3;
- (void)credentialTypes:(id /* block */)a0;
- (void)ejectVolume:(id)a0 usingFlags:(unsigned int)a1 reply:(id /* block */)a2;
- (void)listenerForVolume:(id)a0 reply:(id /* block */)a1;
- (void)sharesAtServer:(id)a0 credentialType:(long long)a1 credential:(id)a2 reply:(id /* block */)a3;
- (void)uniqueNameForName:(id)a0 reply:(id /* block */)a1;
- (void)LiveMountEjectVolumeCluster:(id)a0 withFlags:(unsigned int)a1 reply:(id /* block */)a2;
- (id)addVolume:(id)a0 usingInterface:(id)a1 connectionClass:(Class)a2 andProxy:(id)a3 withDescription:(id)a4;
- (id)addVolume:(id)a0 usingInterface:(id)a1 connectionClass:(Class)a2 queue:(id)a3 proxy:(id)a4 description:(id)a5;
- (id)addVolumeCluster:(id)a0;
- (id)descriptionForVolume:(id)a0;
- (id)getUniqueVolumeName:(id)a0;
- (id)initServiceProxyObjectWithDelegate:(id)a0;
- (void)initializationFinished;
- (void)removeVolume:(id)a0;
- (id)removeVolumeCluster:(id)a0;
- (void)removeVolumeLocked:(id)a0;
- (id)volumeProxyForVolume:(id)a0;

@end
