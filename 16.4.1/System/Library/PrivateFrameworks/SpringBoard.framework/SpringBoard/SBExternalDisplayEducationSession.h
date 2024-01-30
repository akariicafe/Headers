@class NSXPCConnection, NSString, SBExternalDisplayEducationPillViewController, SBSRemoteAlertHandle, BSAbsoluteMachTimer, BSAtomicSignal, NSXPCListener, FBSDisplayIdentity;
@protocol BNPosting;

@interface SBExternalDisplayEducationSession : NSObject <SBExternalDisplayEducationPillViewControllerDelegate, SBRemoteHandshakeProtocol, NSXPCListenerDelegate> {
    BSAtomicSignal *_displayDisconnectSignal;
    BOOL _isHardwareAvailable;
    BOOL _isHardwareAvailableDuringDisplayConnectionWindow;
    id<BNPosting> _bannerPoster;
    unsigned long long _previousPresentedReasons;
    BOOL _isPresenting;
    SBSRemoteAlertHandle *_alertHandle;
    NSXPCConnection *_xpcConnection;
    NSXPCListener *_listener;
    SBExternalDisplayEducationPillViewController *_educationBannerViewController;
    BSAbsoluteMachTimer *_bannerDismissTimer;
}

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_presentBanner;
- (void)_dismissBanner:(id)a0;
- (void)_dismissEducationAlert:(id)a0;
- (void)_presentEducationAlert:(id /* block */)a0;
- (void)deviceConnectionWindowExpired;
- (void)displayConnected;
- (void)displayDisconnected;
- (id)initWithDisplayIdentity:(id)a0 hardwareAvailability:(BOOL)a1 bannerPoster:(id)a2;
- (void)pillViewControllerDidReceiveUserTap:(id)a0;
- (void)updateHardwareAvailability:(BOOL)a0 withinDisplayConnectionWindow:(BOOL)a1;
- (void)wakeUpConnection;

@end
