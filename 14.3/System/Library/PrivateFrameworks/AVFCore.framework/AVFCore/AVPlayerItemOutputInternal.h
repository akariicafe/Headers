@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerItemOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *timebaseReadWriteQueue;
    struct OpaqueCMTimebase { } *timebase;
}

@end
