@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject {
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription { } *formatDescription;
    struct OpaqueCMClock { } *clock;
    BOOL enabled;
    int changeSeed;
    NSString *sourceID;
    NSString *sourceDeviceType;
    long long sourceDevicePosition;
}

- (id)init;
- (void)dealloc;

@end
