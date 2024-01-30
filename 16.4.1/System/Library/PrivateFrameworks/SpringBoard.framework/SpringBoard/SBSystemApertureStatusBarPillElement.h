@class UIColor, NSString, NSSet, UIView, FBScene;
@protocol SAActivityHosting, SAElementHosting, SAElement, SAUILayoutHosting;

@interface SBSystemApertureStatusBarPillElement : NSObject <SBSystemApertureContextProviding, SAUILayoutSpecifying, SAElement, SBSystemApertureSuppressible, SBSystemApertureStatusBarStyleOverridesRepresenting, SAActivityBehavior, SAUIElementViewProviding>

@property (readonly, nonatomic) NSString *activeSymbolName;
@property (readonly, nonatomic) UIColor *activeTintColor;
@property (copy, nonatomic) NSSet *associatedApplications;
@property (retain, nonatomic) id clientStorage;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) unsigned long long representedStatusBarStyleOverrides;
@property (weak, nonatomic) id<SAActivityHosting> activityHost;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) unsigned long long layoutAxis;

+ (unsigned long long)statusBarOverridesThatIgnoreSystemChromeSuppression;

@end
