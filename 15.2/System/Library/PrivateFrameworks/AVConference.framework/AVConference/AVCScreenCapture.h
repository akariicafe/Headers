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
- (void)startCapture;
- (void)dealloc;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)newNSErrorWithErrorDictionary:(id)a0;
- (id)initWithDelegate:(id)a0 withConfig:(id)a1;
- (void)updateScreenCaptureWithConfig:(id)a0;

@end
