@class AVWeakReference, NSString, NSError, AVMediaDataRequester, CALayer, NSObject, AVSampleBufferVideoOutput, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVSampleBufferDisplayLayerInternal : NSObject {
    CALayer *contentLayer;
    struct OpaqueFigVideoQueue { } *videoQueue;
    BOOL outputObscured;
    long long status;
    NSError *error;
    NSString *videoGravity;
    struct CGSize { double width; double height; } presentationSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
    BOOL preventsDisplaySleepDuringVideoPlayback;
    BOOL requiresFlushToResumeDecoding;
    BOOL isRequestingMediaData;
    AVMediaDataRequester *mediaDataRequester;
    BOOL aboveHighWaterLevel;
    NSObject<OS_dispatch_queue> *serialQueue;
    AVWeakReference *weakReferenceToSelf;
    AVWeakReference *weakReferenceToSynchronizer;
    BOOL addedToSynchronizer;
    BOOL controlTimebaseSetByUserIsInUse;
    struct OpaqueCMTimebase { } *controlTimebaseSetByUser;
    struct OpaqueCMTimebase { } *readOnlyVideoQueueTimebase;
    struct OpaqueCMTimebase { } *readOnlyRenderingTimebase;
    AVSampleBufferVideoOutput *videoOutput;
    NSObject<OS_dispatch_queue> *flushCallbackListQueue;
    NSObject<OS_dispatch_queue> *flushCallbackQueue;
    NSMutableArray *flushCallbacks;
    NSObject<OS_dispatch_queue> *queueForProtectingPrerollCompleteCallback;
    id /* block */ pendingPrerollCompleteCallback;
    int pendingPrerollRequestID;
    NSObject<OS_dispatch_queue> *queueForCallingPrerollCompleteCallback;
    int upcomingPTSExpectation;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumUpcomingPTS;
    id didFinishSuspensionNotificationToken;
    NSString *STSLabel;
    CALayer *STSLayer;
}

@end
