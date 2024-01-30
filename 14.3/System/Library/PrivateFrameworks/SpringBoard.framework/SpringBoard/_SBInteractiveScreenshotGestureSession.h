@class SBInteractiveScreenshotGestureRootViewController, NSUUID, SBInteractiveScreenshotGestureHostRootViewController, SBInteractiveScreenshotGestureRootWindow, SBInteractiveScreenshotGestureHostWindow;

@interface _SBInteractiveScreenshotGestureSession : NSObject

@property (readonly, copy, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) SBInteractiveScreenshotGestureHostRootViewController *hostRootViewController;
@property (readonly, nonatomic) SBInteractiveScreenshotGestureRootViewController *rootViewController;
@property (retain, nonatomic) SBInteractiveScreenshotGestureRootWindow *rootWindow;
@property (retain, nonatomic) SBInteractiveScreenshotGestureHostWindow *hostWindow;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;

@end
