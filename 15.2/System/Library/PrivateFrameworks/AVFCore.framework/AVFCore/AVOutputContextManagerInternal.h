@class NSObject;
@protocol OS_dispatch_queue, AVOutputContextManagerImpl;

@interface AVOutputContextManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputContextManagerImpl> impl;
}

@end
