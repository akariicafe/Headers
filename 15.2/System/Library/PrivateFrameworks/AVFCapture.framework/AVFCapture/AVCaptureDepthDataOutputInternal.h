@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureDepthDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    BOOL alwaysDiscardsLateDepthData;
    BOOL filteringEnabled;
}

- (id)init;
- (void)dealloc;

@end
