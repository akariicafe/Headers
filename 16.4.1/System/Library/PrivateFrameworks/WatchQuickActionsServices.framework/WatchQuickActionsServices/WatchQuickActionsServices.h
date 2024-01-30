@class NSString, AXUIClient, NSHashTable, WQAOverlayCoordinator;
@protocol AXUIService;

@interface WatchQuickActionsServices : NSObject <AXUIClientDelegate, BLSBacklightStateObserving, WQAOverlayDataSource, WQAHostLifecycleObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _quickActionHolderLock;
    NSHashTable *_lock_quickActionHolders;
}

@property (readonly, nonatomic) AXUIClient *serverClient;
@property (readonly, nonatomic) id<AXUIService> localService;
@property (readonly, nonatomic) WQAOverlayCoordinator *overlayCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(unsigned long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)shouldUseLocalServiceBundle;
- (void)_handleAppDidBecomeActiveNotification;
- (void)_handleAppDidEnterBackgroundNotification;
- (void)_handleFocusRingVisibilityChanged;
- (void)_local_removeQuickActionsWithIdentifiers:(id)a0;
- (void)_performBlockAccessingQuickActionHolders:(id /* block */)a0;
- (id)_retrieveQuickActionForIdentifier:(id)a0;
- (void)_sendAsyncMessageToServer:(id)a0 withIdentifier:(long long)a1 completion:(id /* block */)a2;
- (id)_sendMessageToServer:(id)a0 withIdentifier:(long long)a1;
- (id)_sendMessageToServer:(id)a0 withIdentifier:(long long)a1 error:(id *)a2;
- (BOOL)_shouldObserveBacklightServicesForAppStateChange;
- (void)animateInstructionalBannerWithScaleFactor:(struct CGPoint { double x0; double x1; })a0 interstepDuration:(double)a1;
- (void)clearQuickActions;
- (void)hideInstructionalBanner;
- (void)quickActionHostInvalidated:(id)a0;
- (id)quickActionsForOverlayCoordinator:(id)a0;
- (void)registerQuickActions:(id)a0;
- (void)registerQuickActions:(id)a0 startupCallback:(id /* block */)a1;
- (void)requestFeedbackForQuickActionType:(long long)a0;
- (void)requestStartScrollWithDirection:(long long)a0;
- (void)requestStopScroll;
- (void)showInstructionalBannerWithTitle:(id)a0 subtitle:(id)a1;
- (void)unregisterQuickActions:(id)a0;
- (void)unregisterQuickActions:(id)a0 startupCallback:(id /* block */)a1;

@end
