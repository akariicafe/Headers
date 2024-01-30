@class NSArray, AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureDataOutputSynchronizerInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *dataOutputs;
    struct OpaqueFigSimpleMutex { } *dataOutputsStorageMutex;
    NSArray *dataOutputsStorage;
    int masterSynchronizedDataQueueMaxDepth;
    BOOL synchronizingVideoAndDepth;
    BOOL synchronizingVideoAndVisionData;
}

@end
