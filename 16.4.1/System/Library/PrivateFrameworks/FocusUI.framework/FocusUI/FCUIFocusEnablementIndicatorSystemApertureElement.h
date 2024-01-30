@class UIButton, NSString, UIImageView, BSUICAPackageView, UILabel, UIView, FCActivityManager;
@protocol FCActivityDescribing, SAElementHosting, SAElement, SAUILayoutHosting, SAAlertHosting;

@interface FCUIFocusEnablementIndicatorSystemApertureElement : NSObject <SAElement, SAAlertBehavior, SAUIElementViewProviding, SAUILayoutSpecifying> {
    UILabel *_onOffTrailingLabel;
    FCActivityManager *_activityManager;
    UIImageView *_activityIconImageView;
    BSUICAPackageView *_activityIconPackageView;
    UIButton *_activityIconButton;
    UILabel *_activityTitleLabel;
    UILabel *_activityOnOffLabel;
}

@property (readonly, copy, nonatomic) id<FCActivityDescribing> activityDescription;
@property (nonatomic, getter=isActivityEnabled) BOOL activityEnabled;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SAAlertHosting> alertHost;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;

- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_primaryColor;
- (id)keyColor;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (BOOL)hasAlertBehavior;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (BOOL)shouldSuppressElementWhileOnCoversheet;
- (id)_enablementText;
- (void)_configureCustomViewsIfNecessary;
- (id)_customLayoutFont;
- (void)_layoutCustomActivityButtonInContainerView:(id)a0;
- (void)_layoutCustomTextViewsInContainerView:(id)a0;
- (void)_layoutHuggingObstructionForLabel:(id)a0 x:(double)a1 width:(double)a2 maxLabelHeight:(double)a3;
- (void)_updateOnOffTrailingLabel;
- (void)_updateVisualStylingAnimated:(BOOL)a0;
- (id)initWithActivityDescription:(id)a0 enabled:(BOOL)a1;

@end
