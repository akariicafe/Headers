@class NSObject;
@protocol OS_dispatch_queue;

@interface MPNetworkObserver : NSObject {
    int _musicCellularNetworkingAllowedNotifyToken;
    int _videosPreferencesChangedToken;
    long long _networkUsageCount;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _videosAllowsCellularStreaming;
}

@property (class, readonly, nonatomic) MPNetworkObserver *sharedNetworkObserver;

@property (readonly, nonatomic) BOOL isUsingNetwork;
@property (nonatomic, getter=isMusicCellularStreamingAllowed) BOOL musicCellularStreamingAllowed;
@property (nonatomic, getter=isVideoCellularStreamingAllowed) BOOL videoCellularStreamingAllowed;
@property (nonatomic, getter=isMusicCellularDownloadingAllowed) BOOL musicCellularDownloadingAllowed;
@property (readonly, nonatomic, getter=isStoreCellularNetworkingAllowed) BOOL storeCellularNetworkingAllowed;

- (void)beginUsingNetwork;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)endUsingNetwork;
- (void)dealloc;

@end
