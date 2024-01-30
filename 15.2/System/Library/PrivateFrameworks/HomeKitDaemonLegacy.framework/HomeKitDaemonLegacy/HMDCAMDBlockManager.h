@class NSObject, NSMutableDictionary, HMDCAMDEmbeddedDeviceService;
@protocol OS_dispatch_queue;

@interface HMDCAMDBlockManager : NSObject {
    NSMutableDictionary *_blockHandlerMap;
    HMDCAMDEmbeddedDeviceService *_service;
    NSObject<OS_dispatch_queue> *_blockQueue;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addBlockNoCopy:(id)a0 forKey:(id)a1;
- (void)addBlock:(id)a0 forKey:(id)a1;
- (void)removeBlock:(id)a0;
- (void)removeBlockForKey:(id)a0;
- (id)blockForKey:(id)a0;
- (id)keyForBlock:(id)a0;
- (void)invokeForwardedBlockWithArguments:(id)a0 forKey:(id)a1;
- (id)forwardingBlockWithArgumentCount:(unsigned long long)a0 forKey:(id)a1;

@end
