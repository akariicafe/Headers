@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioClientManager : NSObject {
    NSMutableDictionary *_clientList;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)registerBlocksForService;
- (void)dealloc;
- (id)getAudioClientWithProcessId:(id)a0 create:(BOOL)a1;
- (void)unregisterBlocksForService;

@end
