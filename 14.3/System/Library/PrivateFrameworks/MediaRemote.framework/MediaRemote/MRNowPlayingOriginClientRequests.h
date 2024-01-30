@class NSObject, NSMutableArray, MRPlayerPath, NSMutableDictionary, MRDeviceInfo, MROrigin, NSNumber;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSNumber *_volumeCapabilities;
    NSNumber *_volume;
    NSMutableArray *_nowPlayingClients;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableArray *_deviceInfoCompletions;
    NSMutableArray *_volumeCompletions;
    NSMutableArray *_volumeCapabilitiesCompletions;
}

@property (readonly, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSNumber *volumeCapabilities;
@property (retain, nonatomic) NSNumber *volume;

- (void)removeClient:(id)a0;
- (void)handleVolumeRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)a0;
- (id)nowPlayingClientRequestsForPlayerPath:(id)a0;
- (void)handleVolumeCapabilitiesRequestWithCompletion:(id /* block */)a0;
- (void)restoreNowPlayingClientState;
- (void)handleDeviceInfoRequestWithCompletion:(id /* block */)a0;
- (id /* block */)transactionCallbackForName:(unsigned long long)a0;
- (id)debugDescription;
- (void)setTransactionCallback:(id /* block */)a0 forName:(unsigned long long)a1;
- (id)initWithOrigin:(id)a0;

@end
