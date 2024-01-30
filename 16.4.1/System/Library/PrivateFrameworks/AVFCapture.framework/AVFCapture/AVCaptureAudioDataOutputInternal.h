@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureAudioDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
}

- (void)dealloc;
- (id)init;

@end
