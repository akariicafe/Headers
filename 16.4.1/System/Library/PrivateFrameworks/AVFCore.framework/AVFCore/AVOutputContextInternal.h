@class NSObject;
@protocol OS_dispatch_queue, AVOutputContextImpl, AVOutputContextCommunicationChannelDelegate;

@interface AVOutputContextInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputContextImpl> impl;
    unsigned long long outputDeviceFeatures;
    int applicationPID;
    BOOL applicationPIDWasSet;
    id<AVOutputContextCommunicationChannelDelegate> communicationChannelDelegate;
}

- (void).cxx_destruct;

@end
