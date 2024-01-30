@class PAAccessInterval, RBSProcessHandle;

@interface BWCameraStreamingMonitorClientInfo : NSObject {
    BOOL _streaming;
    BOOL _cameraAccessGranted;
    BOOL _terminated;
    RBSProcessHandle *_processHandle;
    PAAccessInterval *_accessInterval;
}

- (void)dealloc;

@end
