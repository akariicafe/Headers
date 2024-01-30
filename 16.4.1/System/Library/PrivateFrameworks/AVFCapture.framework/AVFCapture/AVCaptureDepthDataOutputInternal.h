@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureDepthDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    BOOL alwaysDiscardsLateDepthData;
    BOOL filteringEnabled;
}

- (void)dealloc;
- (id)init;

@end
