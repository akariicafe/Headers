@class NSObject;
@protocol OS_dispatch_queue, AVOutputDeviceAuthorizationSessionImpl, AVOutputDeviceAuthorizationSessionDelegate;

@interface AVOutputDeviceAuthorizationSessionInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputDeviceAuthorizationSessionDelegate> delegate;
    id<AVOutputDeviceAuthorizationSessionImpl> impl;
}

- (void).cxx_destruct;

@end
