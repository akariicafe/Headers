@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (id)_init;
- (id)_connection;
- (void)_onQueue_prewarmDevice;
- (void)prewarmDevice;
- (void)prewarmDeviceAndNetwork;

@end
