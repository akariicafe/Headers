@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCRemoteVideoManager : NSObject <VCRemoteVideoManagerDelegate> {
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _remoteVideoLock;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)unlock;
- (void)cleanupDictionaries;
- (void)lock;
- (id)init;
- (void)remoteMediaDidStall:(BOOL)a0 streamToken:(long long)a1;
- (BOOL)doesQueueExistForStreamToken:(id)a0;
- (void)remoteVideoDidPause:(BOOL)a0 streamToken:(long long)a1;
- (void)registerBlocksForService;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1 imageQueueProtected:(BOOL)a2;
- (void)dealloc;
- (void)remoteScreenAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (unsigned int)slotForStreamToken:(long long)a0 videoMode:(int)a1;
- (void)releaseQueueForStreamToken:(long long)a0;
- (void)notifyCachedStateForStreamToken:(id)a0;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)a0;
- (id)getQueueForStreamToken:(unsigned int)a0 videoMode:(int)a1;
- (void)connectionDidChangeWithLocalInterfaceType:(id)a0 remoteInterfaceType:(id)a1 streamToken:(long long)a2;
- (id)newQueueForStreamToken:(long long)a0 videoMode:(int)a1;
- (void)remoteVideoDidSuspend:(BOOL)a0 streamToken:(long long)a1;
- (void)remoteVideoAttributesDidChange:(id)a0 streamToken:(long long)a1;
- (void)remoteVideoDidDegrade:(BOOL)a0 streamToken:(long long)a1;

@end
