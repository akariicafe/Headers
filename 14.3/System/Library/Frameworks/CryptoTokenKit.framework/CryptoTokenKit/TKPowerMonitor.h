@class NSObject;
@protocol OS_dispatch_queue;

@interface TKPowerMonitor : NSObject {
    struct IONotificationPort { } *_portRef;
    unsigned int _handle;
    NSObject<OS_dispatch_queue> *_queue;
}

@property unsigned int kernelPort;
@property BOOL awaken;

+ (id)defaultMonitor;

- (id)init;
- (void).cxx_destruct;

@end
