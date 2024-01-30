@class NSObject;
@protocol OS_dispatch_queue, AVOutputDeviceDiscoverySessionImpl;

@interface AVOutputDeviceDiscoverySessionInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputDeviceDiscoverySessionImpl> impl;
    long long discoveryMode;
}

@end
