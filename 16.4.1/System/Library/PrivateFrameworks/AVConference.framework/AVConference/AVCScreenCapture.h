@class AVConferenceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface AVCScreenCapture : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_avConferenceScreenCaptureQueue;
}

@property (readonly, nonatomic) id delegate;

+ (unsigned char)capabilities;
+ (unsigned char)captureCapabilities;

- (void)stopCapture;
- (void)dealloc;
- (void)startCapture;
- (void)deregisterBlocksForNotifications;
- (id)initWithDelegate:(id)a0 withConfig:(id)a1;
- (id)newNSErrorWithErrorDictionary:(id)a0;
- (void)registerBlocksForNotifications;
- (void)reportScreenShareIsStarting:(BOOL)a0;
- (void)updateScreenCaptureWithConfig:(id)a0;

@end
