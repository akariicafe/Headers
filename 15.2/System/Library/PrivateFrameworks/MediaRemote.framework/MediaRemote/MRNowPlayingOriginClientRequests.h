@class NSDate, MRPlayerPath, NSMutableDictionary, NSObject, NSMutableArray, MRDeviceInfo, MROrigin, NSNumber;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDeviceInfo *_deviceInfo;
    NSNumber *_volumeCapabilities;
    NSNumber *_volume;
    NSDate *_lastPlayingDate;
    NSMutableArray *_nowPlayingClients;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableArray *_deviceInfoCompletions;
    NSMutableArray *_volumeCompletions;
    NSMutableArray *_volumeCapabilitiesCompletions;
    NSMutableArray *_lastPlayingDateCompletions;
}

@property (readonly, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSNumber *volumeCapabilities;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSDate *lastPlayingDate;

- (id)initWithOrigin:(id)a0;
- (void)removeAllClients;
- (void)removeClient:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)handleVolumeRequestWithCompletion:(id /* block */)a0;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)a0;
- (void)handleLastPlayingDateRequestWithCompletion:(id /* block */)a0;
- (void)setTransactionCallback:(id /* block */)a0 forName:(unsigned long long)a1;
- (void)handleVolumeCapabilitiesRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id /* block */)transactionCallbackForName:(unsigned long long)a0;
- (id)nowPlayingClientRequestsForPlayerPath:(id)a0;
- (void)handleDeviceInfoRequestWithCompletion:(id /* block */)a0;
- (id)debugDescription;

@end
