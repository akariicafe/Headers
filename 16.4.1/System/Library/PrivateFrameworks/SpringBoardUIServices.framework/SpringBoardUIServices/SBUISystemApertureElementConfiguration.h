@class UIView, NSString, NSURL, UIColor, NSValue, BSSettings, BSAction, UIViewController, BSMutableSettings;
@protocol SBUISystemApertureElement, SBUISystemApertureAccessoryView;

@interface SBUISystemApertureElementConfiguration : NSObject <SBUISystemApertureElement>

@property (readonly, nonatomic) BSMutableSettings *_storage;
@property (readonly, nonatomic) BSSettings *otherSceneClientSettingsRepresentation;
@property (nonatomic) BOOL shouldDeferViewSizingPreferenceUpdates;
@property (copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic) long long contentRole;
@property (nonatomic) long long preferredLayoutMode;
@property (nonatomic) long long minimumLayoutMode;
@property (nonatomic) long long maximumLayoutMode;
@property (nonatomic) long long appliedLayoutMode;
@property (weak, nonatomic) UIViewController *containerViewController;
@property (weak, nonatomic) UIViewController<SBUISystemApertureElement> *elementViewController;
@property (retain, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (retain, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (retain, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (retain, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (nonatomic) double preferredHeightForBottomSafeArea;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } preferredOutsetsFromUnsafeArea;
@property (retain, nonatomic) NSValue *preferredPaddingForCompactLayout;
@property (nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;
@property (nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredCustomAspectRatio;
@property (nonatomic) long long preferredCustomLayout;
@property (copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSURL *launchURL;
@property (retain, nonatomic) BSAction *launchAction;
@property (nonatomic) BOOL hasMenuPresentation;
@property (nonatomic) unsigned long long presentationBehaviors;
@property (nonatomic) BOOL preventsInteractiveDismissal;
@property (nonatomic) BOOL preventsAutomaticDismissal;
@property (copy, nonatomic) UIColor *keyColor;
@property (nonatomic) long long activeLayoutMode;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_elementSupportsDynamicResizing;
- (void)_updateStorageForViewProperties;
- (BOOL)SBUISA_attachedMinimalViewRequiresZeroPadding;
- (BOOL)_elementRequiresConstraintBasedLayout;
- (void)_invalidateOtherSceneClientSettingsRepresentation;
- (id)_strongElementViewController;
- (void)_updateStorageForViewPropertiesIfNeeded;
- (struct CGSize { double x0; double x1; })maximumAccessoryViewSizeForLayoutMode:(long long)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeClampedToMaximumExpandedSize;
- (void)refreshViewSizingPreferences;
- (void)setPreferredOutsetsfromUnsafeArea:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)validateConfiguration;

@end
