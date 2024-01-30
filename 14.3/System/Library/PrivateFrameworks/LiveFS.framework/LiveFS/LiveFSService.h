@class NSCondition, NSMutableDictionary, NSObject;
@protocol LiveFSMountDelegate;

@interface LiveFSService : NSObject <LiveFSMount> {
    NSObject<LiveFSMountDelegate> *delegate;
    NSMutableDictionary *listeners;
    NSMutableDictionary *descriptions;
    NSCondition *l;
    BOOL _initDone;
}

+ (id)newServiceProxyObjectWithDelegate:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)LiveMountList:(id /* block */)a0;
- (void)LiveMountListenerForVolume:(id)a0 completionHandler:(id /* block */)a1;
- (void)LiveMountEjectVolume:(id)a0 withFlags:(unsigned int)a1 reply:(id /* block */)a2;
- (void)LiveMountEjectDisk:(id)a0 reply:(id /* block */)a1;
- (void)unlockVolume:(id)a0 password:(id)a1 saveToKeychain:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)LiveMountListenerForVolume:(id)a0 reply:(id /* block */)a1;
- (void)LiveMountSharesAtServer:(id)a0 credentialType:(long long)a1 credential:(id)a2 reply:(id /* block */)a3;
- (void)LiveMountAddVolume:(id)a0 atServer:(id)a1 credentialType:(long long)a2 credential:(id)a3 reply:(id /* block */)a4;
- (void)LiveMountAddDisk:(id)a0 reply:(id /* block */)a1;
- (void)LiveMountAddVolume:(id)a0 withListener:(id)a1 andWithDescription:(id)a2 reply:(id /* block */)a3;
- (void)LiveMountCredentialTypes:(id /* block */)a0;
- (id)initServiceProxyObjectWithDelegate:(id)a0;
- (id)addVolume:(id)a0 usingInterface:(id)a1 connectionClass:(Class)a2 queue:(id)a3 andProxy:(id)a4 withDescription:(id)a5;
- (void)removeVolumeLocked:(id)a0;
- (void)removeVolume:(id)a0;
- (id)removeVolumeCluster:(id)a0;
- (void)LiveMountEjectVolumeCluster:(id)a0 withFlags:(unsigned int)a1 reply:(id /* block */)a2;
- (void)initializationFinished;
- (id)addVolume:(id)a0 usingInterface:(id)a1 connectionClass:(Class)a2 andProxy:(id)a3 withDescription:(id)a4;
- (id)getUniqueVolumeName:(id)a0;
- (id)addVolumeCluster:(id)a0;
- (id)descriptionForVolume:(id)a0;
- (void)LiveMountEjectVolume:(id)a0 reply:(id /* block */)a1;
- (id)volumeProxyForVolume:(id)a0;

@end
