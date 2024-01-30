@class AVCaptureDeviceInput;

@interface AVCaptureDeviceInternal : NSObject {
    int openRefCount;
    int configLockRefCount;
    int configLockPid;
    BOOL usingDevice;
    AVCaptureDeviceInput *activeInput;
}

@end
