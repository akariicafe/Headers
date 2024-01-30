@class NSError, NSObject;
@protocol AVOutputDeviceAuthorizationRequestImpl, OS_dispatch_queue;

@interface AVOutputDeviceAuthorizationRequestInternal : NSObject {
    id<AVOutputDeviceAuthorizationRequestImpl> impl;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long status;
    NSError *error;
}

@end
