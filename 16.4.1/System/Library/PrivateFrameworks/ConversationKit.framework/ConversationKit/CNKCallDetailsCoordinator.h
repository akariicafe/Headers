@interface CNKCallDetailsCoordinator : NSObject <CNKConversationHUDDetailsViewControllerDelegate> {
    void /* unknown type, empty encoding */ hostViewController;
    void /* unknown type, empty encoding */ deferredPresentationManager;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ detailsNavigationController;
}

@property (nonatomic, readonly) BOOL isCaptioningEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ shouldHideViewsFromScreenSharing;

- (void)startWithReason:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)stopWithReason:(id)a0;
- (id)initWithHostViewController:(id)a0 controlsManager:(id)a1 deferredPresentationManager:(id)a2;
- (void)wantsDismissal;

@end
