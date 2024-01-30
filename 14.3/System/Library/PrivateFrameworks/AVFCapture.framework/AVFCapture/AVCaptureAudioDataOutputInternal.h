@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureAudioDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
}

- (id)init;
- (void)dealloc;

@end
