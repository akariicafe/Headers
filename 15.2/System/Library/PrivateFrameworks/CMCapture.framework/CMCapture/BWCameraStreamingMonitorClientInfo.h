@class PAAccessInterval;

@interface BWCameraStreamingMonitorClientInfo : NSObject {
    BOOL _streaming;
    BOOL _cameraAccessGranted;
    BOOL _terminated;
    PAAccessInterval *_accessInterval;
    struct { unsigned int val[8]; } _clientAuditToken;
}

- (void)dealloc;

@end
