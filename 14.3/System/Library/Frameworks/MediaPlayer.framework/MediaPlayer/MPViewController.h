@class MPAVItem, NSString, UIView, MPAVController;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode> {
    unsigned char _appearing : 1;
    unsigned char _observesApplicationSuspendResumeEventsOnly : 1;
    unsigned char _showOverlayWhileAppearingDisabled : 1;
    long long _playerLockedCount;
}

@property (nonatomic) BOOL registeredForPlayerNotifications;
@property (nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;
@property (nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVItem *item;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) MPAVController *player;
@property (readonly, retain, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setView:(id)a0;
- (void)unlockPlayer;
- (BOOL)isAppearing;
- (void)setAppearing:(BOOL)a0;
- (void)removeChildViewController:(id)a0;
- (void)stopTicking;
- (void)beginIgnoringChangeTypes:(unsigned long long)a0;
- (id)copyOverlayViewForTransitionToItem:(id)a0;
- (BOOL)canDisplayItem:(id)a0 withInterfaceOrientation:(long long)a1;
- (void)beginTransitionOverlayHidding;
- (void)endIgnoringChangeTypes:(unsigned long long)a0;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)a0;
- (void)didChangeToInterfaceOrientation:(long long)a0;
- (void)startTicking;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)a0;
- (void)applicationDidSuspendEventsOnly;
- (void)applicationDidResumeEventsOnly;
- (void)applicationResumed;
- (void)willChangeToInterfaceOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)_canReloadView;
- (void)addChildViewController:(id)a0;
- (void)lockPlayer;
- (void)clearWeakReferencesToObject:(id)a0;
- (void)noteIgnoredChangeTypes:(unsigned long long)a0;
- (void)setOrientation:(long long)a0 animate:(BOOL)a1;
- (void)registerForPlayerNotifications;
- (void)unregisterForPlayerNotifications;

@end
