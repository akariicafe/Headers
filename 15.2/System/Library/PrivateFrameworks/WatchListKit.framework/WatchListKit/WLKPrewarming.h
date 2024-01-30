@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}

+ (id)sharedInstance;

- (void)prewarm;
- (id)_connection;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)_onQueue_prewarmDevice;
- (void)prewarmDevice;
- (void)prewarmDeviceAndNetwork;

@end
