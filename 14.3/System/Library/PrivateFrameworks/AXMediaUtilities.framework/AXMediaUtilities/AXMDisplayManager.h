@class AXMDisplay, NSString, NSObject, FBSDisplayMonitor;
@protocol OS_dispatch_queue;

@interface AXMDisplayManager : NSObject <FBSDisplayObserving> {
    NSObject<OS_dispatch_queue> *_queue;
    AXMDisplay *_queue_CoreAnimationMainDisplay;
    AXMDisplay *_queue_FrontBoardMainDisplay;
    BOOL _initialized;
}

@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (nonatomic) double mobileGestaltOrientation;
@property (readonly, nonatomic) AXMDisplay *frontBoardMainDisplay;
@property (readonly, nonatomic) AXMDisplay *coreAnimationMainDisplay;
@property (readonly, nonatomic) BOOL isInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateDisplay:(id)a0 withCADisplay:(id)a1;
- (void)dealloc;
- (void)_updateDisplay:(id)a0 withConfiguration:(id)a1;
- (id)_displayPropertiesFromMobileGestalt;
- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (id)initAndWaitForMainDisplayConfiguration;
- (long long)_discreteOrientationForOrientation:(double)a0;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)_updateDisplayPropertiesWithConfiguration:(id)a0;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (id)initWithCompletion:(id /* block */)a0;

@end
