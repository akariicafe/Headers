@class HMDMediaBrowser, NSString, NSSet, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDMediaEndpoint : HMFObject <HMFLogging> {
    id<HMFLocking> _lock;
}

@property (readonly) void *retainedEndpoint;
@property (readonly, nonatomic) void *externalDevice;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSSet *outputDeviceIdentifiers;
@property (nonatomic) unsigned int connectionState;
@property (retain, nonatomic) NSMutableArray *pendingBlocks;
@property (readonly, nonatomic) NSString *logID;
@property (weak) HMDMediaBrowser *browser;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSArray *advertisements;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEndpoint:(void *)a0;
- (void)setPlaybackState:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (BOOL)isEqualToEndpoint:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (void)updateWithEndpoint:(id)a0;
- (id)logIdentifier;
- (void)updateOutputDevicesAndConnectWithCompletionHandler:(id /* block */)a0;
- (void)setRetainedEndpoint:(void *)a0;
- (void)_updateOutputDevicesAndConnectWithCompletionHandler:(id /* block */)a0;
- (void)_notifyPendingBlocksOfError:(id)a0;
- (void)_updateOutputDeviceIdentifiers;
- (void)_connectWithCompletionHandler:(id /* block */)a0;
- (void *)copyOrigin;
- (void)_getPlaybackStateWithCompletionHandler:(id /* block */)a0;
- (void)_setPlaybackState:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)disconnectFromEndpoint:(void *)a0;
- (void)registerForNowPlayingUpdates:(BOOL)a0;
- (BOOL)doesContainAnyAccessory:(id)a0;
- (void)evaluateIfMediaPlaybackStateChanged:(id)a0 withCompletion:(id /* block */)a1;
- (void)getPlaybackStateWithCompletionHandler:(id /* block */)a0;

@end
