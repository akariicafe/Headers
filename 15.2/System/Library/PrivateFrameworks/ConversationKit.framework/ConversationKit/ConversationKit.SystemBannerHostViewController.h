@class NSString, UIViewController, BSAnimationSettings;

@interface ConversationKit.SystemBannerHostViewController : UIViewController <BNPresentable, SBUIPresentableHomeGestureParticipant, SBUIPresentableButtonEventsHandling> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ callUUID;
    void /* unknown type, empty encoding */ sizeClass;
    void /* unknown type, empty encoding */ controlsType;
    void /* unknown type, empty encoding */ notice;
    void /* unknown type, empty encoding */ captureGroupName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captureOnlyBackdropView;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ conversationControlsViewController;
    void /* unknown type, empty encoding */ expandedForMenuPresentation;
    void /* unknown type, empty encoding */ requesterIdentifier;
    void /* unknown type, empty encoding */ layoutDescription;
    void /* unknown type, empty encoding */ destination;
    void /* unknown type, empty encoding */ panGestureProxy;
    void /* unknown type, empty encoding */ dismissalPreventionAssertion;
    void /* unknown type, empty encoding */ gesturePriorityAssertion;
    void /* unknown type, empty encoding */ buttonEventAssertion;
}

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } bannerContentOutsets;
@property (nonatomic, readonly) BOOL touchOutsideDismissalEnabled;
@property (nonatomic, readonly) BOOL draggingDismissalEnabled;
@property (nonatomic, readonly) BOOL draggingInteractionEnabled;
@property (nonatomic, readonly) BSAnimationSettings *bannerSizeTransitionAnimationSettings;
@property (nonatomic, copy) NSString *requesterIdentifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ presentableContext;

- (void)presentableWillAppearAsBanner:(id)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)handleHomeButtonPress:(id)a0;
- (BOOL)homeAffordanceDidCrossThreshold;
- (void)draggingDidBeginWithGestureProxy:(id)a0;
- (BOOL)isDraggingDismissalEnabled;
- (BOOL)isDraggingInteractionEnabled;
- (BOOL)isTouchOutsideDismissalEnabled;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
