@class SBSRemoteContentDefinition, NSString, CSDashBoardRemoteContentSettings, NSArray, SBSRemoteContentPreferences, SBFFluidBehaviorSettings, CSRemoteContentHostViewController, CSDateViewComponent, UIViewFloatAnimatableProperty;
@protocol SBFAuthenticationStatusProvider, CSRemoteContentViewControllerDelegate;

@interface CSRemoteContentInlineViewController : CSCoverSheetViewControllerBase <PTSettingsKeyObserver, CSAdjunctItemHosting, CSMainPageInlineContentViewControllerDelegate, CSRemoteContentViewControllerProtocol> {
    struct CGSize { double width; double height; } _containerSize;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFFluidBehaviorSettings *_alphaSettings;
    BOOL _userHasInteractedSinceWake;
    BOOL _dismissing;
    SBSRemoteContentDefinition *_definition;
    SBSRemoteContentPreferences *_remoteContentPreferences;
    id _cancelInlineContentTouchesAssertion;
}

@property (retain, nonatomic) CSDateViewComponent *dateTimeComponent;
@property (retain, nonatomic) CSDashBoardRemoteContentSettings *remoteContentSettings;
@property (weak, nonatomic) id<CSRemoteContentViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (weak, nonatomic) CSRemoteContentHostViewController *hostViewController;
@property (nonatomic) BOOL remoteContentHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double containerCornerRadius;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inlineContentFrame;

- (id)_newDisplayLayoutElement;
- (void)_updatePreferredContentSize;
- (BOOL)usesBackgroundView;
- (BOOL)handleEvent:(id)a0;
- (void)_updateDisplayLayoutElementForActivation:(id)a0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)aggregateBehavior:(id)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (long long)_dateTimeStyle;
- (long long)_backgroundStyle;
- (BOOL)_dismissesOnTap;
- (long long)_homeGestureMode;
- (BOOL)_reducesWhitePoint;
- (BOOL)_suppressesBottomEdgeContent;
- (long long)preferredNotificationListMode;
- (void)_setUserHasInteractedSinceWake:(BOOL)a0;
- (void)_addChildHostViewController:(id)a0;
- (void)_didReceiveScroll;
- (void)_didReceiveTouch;
- (void)_dismissForced:(BOOL)a0 animated:(BOOL)a1;
- (void)_removeChildHostViewController;
- (BOOL)_supportsLuminanceReductionForCurrentBackgroundStyle;
- (void)_updateContentAlpha:(double)a0 interactive:(BOOL)a1;
- (void)beginCancelTouchesForCurrentEventInHostedContent;
- (long long)contentPresentationType;
- (void)didChangeRemoteHostContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didReceiveBackgroundScroll;
- (void)didReceiveBackgroundTouch;
- (BOOL)dismissForDismissType:(long long)a0 completion:(id /* block */)a1;
- (void)endCancelTouchesForCurrentEventInHostedContent;
- (void)hostDidChangeContentBounds;
- (id)initWithContentDefinition:(id)a0 preferences:(id)a1 hostViewController:(id)a2 authenticationStatusProvider:(id)a3;
- (BOOL)inlineContentDismissesOnSignificantScroll;
- (BOOL)insetsMargins;
- (BOOL)isInUnlockGestureMode;
- (double)remoteContentHeight;
- (void)remoteDidChangeStyle;
- (BOOL)shouldDismissInlineContentForNowPlaying;
- (BOOL)shouldDismissInlineContentForUnlock;
- (BOOL)shouldInlineContentReceiveBackgroundTouches;
- (BOOL)suppressesDismissalForNotification;
- (BOOL)suppressesDismissalGesture;

@end
