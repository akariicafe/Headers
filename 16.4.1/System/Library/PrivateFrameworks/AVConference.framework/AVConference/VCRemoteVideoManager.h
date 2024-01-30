@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)registerBlocksForService;
- (void)dealloc;
- (id)init;
- (void)cleanupDictionaries;
- (void)connectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (id)contextIdForStreamTokenWithArguments:(id)a0 error:(id *)a1;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)a0;
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (void)dispatchedDidReceiveFirstRemoteFrameForStreamToken:(long long)a0;
- (void)dispatchedNotifyCachedStateForStreamToken:(id)a0;
- (void)dispatchedRemoteMediaDidStall:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteScreenAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidDegrade:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidPause:(BOOL)a0 streamToken:(long long)a1;
- (void)dispatchedRemoteVideoDidSuspend:(BOOL)a0 streamToken:(long long)a1;
- (BOOL)doesQueueExistForStreamToken:(id)a0;
- (id)getQueueForStreamToken:(unsigned int)a0 videoMode:(int)a1;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1 imageQueueProtected:(BOOL)a2;
- (void)notifyCachedStateForStreamToken:(id)a0;
- (BOOL)queueExistsForStreamToken:(id)a0;
- (void)releaseQueueForStreamToken:(long long)a0;
- (void)remoteMediaDidStall:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteScreenAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)remoteVideoAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)remoteVideoDidDegrade:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteVideoDidPause:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteVideoDidSuspend:(BOOL)a0 streamToken:(long long)a1;
- (id)setLayerBoundsForStreamTokenWithArguments:(id)a0 error:(id *)a1;
- (unsigned int)slotForStreamToken:(long long)a0 videoMode:(int)a1;

@end
