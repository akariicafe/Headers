@class AVVideoOutputSettings, AVWeakReference, NSObject, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerItemVideoOutputInternal : NSObject {
    struct OpaqueCMTimebase { } *timebase;
    double currentRate;
    struct OpaqueFigVisualContext { } *vc;
    AVWeakReference *playerItemWeakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    struct OpaqueVTPixelBufferConformer { } *pixelBufferConformer;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSObject<OS_dispatch_source> *delegateWakeupSource;
    double advanceWakeUpInterval;
    BOOL advanceWakeUpIntervalIsValid;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } wakeUpImageTime;
    BOOL immediateWakeUp;
    long long clientStateOnRequestedMediaDataChangeNotification;
    BOOL suppressesPlayerRendering;
    BOOL shouldTagBuffersWithInfo;
    AVVideoOutputSettings *videoSettings;
}

@end
