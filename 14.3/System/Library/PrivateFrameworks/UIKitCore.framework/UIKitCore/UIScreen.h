@class FBSDisplayConfiguration, CARSessionStatus, UISDisplayContext, NSDictionary, _UIScreenBoundingPathUtilities, UIScreenMode, UIView, NSString, UIFocusSystem, UITraitCollection, UISoftwareDimmingWindow, _UIInteractiveHighlightEnvironment, NSArray, _UIDragManager, _UIScreenFixedCoordinateSpace, UIWindow;
@protocol UIFocusEnvironment, _UIFocusRegionContainer, UIFocusItemContainer, UICoordinateSpace, UIFocusItem, _UIDisplayInfoProviding;

@interface UIScreen : NSObject <_UIFallbackEnvironment, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _unjailedReferenceBounds;
    long long _interfaceOrientation;
    long long _gamut;
    long long _userInterfaceIdiom;
    UISDisplayContext *_initialDisplayContext;
    NSDictionary *_capabilities;
    NSArray *_availableDisplayModes;
    double _pointsPerInch;
    double _nativePointsPerMillimeter;
    _UIScreenFixedCoordinateSpace *_fixedCoordinateSpace;
    id<_UIDisplayInfoProviding> _displayInfoProvider;
    FBSDisplayConfiguration *__displayConfiguration;
    long long _lastUpdatedCanvasUserInterfaceStyle;
    struct { unsigned char bitsPerComponent : 4; unsigned char initialized : 1; unsigned char connected : 1; unsigned char hasSetOverscanCompensation : 1; unsigned char overscanCompensation : 2; unsigned char wantsWideContentMargins : 1; unsigned char queriedDeviceContentMargins : 1; unsigned char hasCalculatedPointsPerInch : 1; unsigned char rightHandDrive : 1; unsigned char carPlayNightModeEnabled : 1; } _screenFlags;
    struct { unsigned char isKnown : 1; unsigned char isSupported : 1; unsigned char isInRange : 1; } _carPlayHumanPresenceStatus;
}

@property (class, readonly, nonatomic) NSArray *screens;
@property (class, readonly, nonatomic) UIScreen *mainScreen;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, setter=_setSoftwareDimmingWindow:) UISoftwareDimmingWindow *_softwareDimmingWindow;
@property (nonatomic, setter=_setLastNotifiedBacklightLevel:) float _lastNotifiedBacklightLevel;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, getter=isCaptured, setter=_setCaptured:) BOOL captured;
@property (retain, nonatomic, getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:) UITraitCollection *defaultTraitCollection;
@property (retain, nonatomic, getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:) UITraitCollection *overrideTraitCollection;
@property (retain, nonatomic, getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:) UITraitCollection *lastNotifiedTraitCollection;
@property (nonatomic, setter=_setUIIBAlwaysProvidePeripheryInsets:) BOOL _UIIBAlwaysProvidePeripheryInsets;
@property (retain, nonatomic, getter=_carSessionStatus) CARSessionStatus *carSessionStatus;
@property (retain, nonatomic, getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:) _UIScreenBoundingPathUtilities *boundingPathUtilities;
@property (readonly, nonatomic, getter=_interactiveHighlightEnvironment) _UIInteractiveHighlightEnvironment *interactiveHighlightEnvironment;
@property (readonly, nonatomic, getter=_dragManager) _UIDragManager *dragManager;
@property (nonatomic, getter=_isMainScreen, setter=_setMainScreen:) BOOL mainScreen;
@property (readonly, nonatomic, getter=_focusSystem) UIFocusSystem *focusSystem;
@property (nonatomic, setter=_setFocusedWindow:) UIWindow<UIFocusEnvironment> *_focusedWindow;
@property (readonly, nonatomic) UIWindow *_preferredFocusedWindow;
@property (nonatomic, getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:) BOOL _performingSystemSnapshot;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _referenceBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) double scale;
@property (readonly, copy, nonatomic) NSArray *availableModes;
@property (readonly, nonatomic) UIScreenMode *preferredMode;
@property (retain, nonatomic) UIScreenMode *currentMode;
@property (nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } overscanCompensationInsets;
@property (readonly, nonatomic) UIScreen *mirroredScreen;
@property (nonatomic) double brightness;
@property (nonatomic) BOOL wantsSoftwareDimming;
@property (readonly) id<UICoordinateSpace> coordinateSpace;
@property (readonly) id<UICoordinateSpace> fixedCoordinateSpace;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nativeBounds;
@property (readonly, nonatomic) double nativeScale;
@property (readonly) long long maximumFramesPerSecond;
@property (readonly, nonatomic) double calibratedLatency;
@property (readonly, weak, nonatomic) id<UIFocusItem> focusedItem;
@property (readonly, weak, nonatomic) UIView *focusedView;
@property (readonly, nonatomic) BOOL supportsFocus;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } applicationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

+ (void)initialize;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toView:(id)a1;
+ (void)_FBSDisplayConfigurationConnected:(id)a0 forInitialDisplayContext:(id)a1 andNotify:(BOOL)a2 forceMain:(BOOL)a3;
+ (id)_carScreen;
+ (void)_enumerateScreensWithBlock:(id /* block */)a0;
+ (void)_FBSDisplayDidPossiblyConnect:(id)a0 withScene:(id)a1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)a0 withScene:(id)a1 andPost:(BOOL)a2;
+ (void)_FBSDisplayConfigurationConnected:(id)a0 andNotify:(BOOL)a1 forceMain:(BOOL)a2;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)a0 forSceneDestruction:(id)a1;
+ (void)_FBSDisplayConfigurationConnected:(id)a0 andNotify:(BOOL)a1;
+ (BOOL)_shouldDisableJail;
+ (void)_FBSDisplayIdentityDisconnected:(id)a0;
+ (id)_screenWithDisplayID:(id)a0;
+ (id)_screenWithIntegerDisplayID:(unsigned int)a0;
+ (void)_prepareScreensForAppResume;
+ (void)_FBSDisplayDidPossiblyConnect:(id)a0;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)a0;
+ (BOOL)_isProbablyBeingRecorded;
+ (id)__displayConfigurationsIncludingMain:(BOOL)a0;
+ (id)_screenWithFBSDisplayIdentity:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToRotateScreen:(double)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForScreenOriginRotation:(double)a0;
+ (id)_screenWithDisplayName:(id)a0;
+ (id)_mainScreenThreadSafeTraitCollection;
+ (id)_screenForScene:(id)a0;

- (double)_latency;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (id)_display;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (long long)_interfaceOrientation;
- (id)_capabilities;
- (unsigned int)_seed;
- (long long)gamut;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)a0 usingStatusbarHeight:(double)a1 ignoreStatusBar:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)a0 usingStatusbarHeight:(double)a1 ignoreStatusBar:(BOOL)a2;
- (void)_setUserInterfaceIdiom:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)a0 usingStatusbarHeight:(double)a1;
- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)snapshot;
- (long long)_effectiveUserInterfaceStyle;
- (id)displayIdentity;
- (void)_accessibilityBoldTextChanged:(id)a0;
- (void)dealloc;
- (id)_name;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBoundsForInterfaceOrientation:(long long)a0;
- (id)_preferredFocusRegionCoordinateSpace;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (int)screenType;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (double)_refreshRate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneBoundsForInterfaceOrientation:(long long)a0;
- (BOOL)_isCarScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)a0;
- (BOOL)_hasWindows;
- (id)_displayID;
- (double)_rotation;
- (double)_displayCornerRadius;
- (unsigned int)_integerDisplayID;
- (id)initWithDisplayConfiguration:(id)a0 forceMainScreen:(BOOL)a1;
- (void)_connectScreen;
- (void)_computeMetrics;
- (void)_disconnectScreen;
- (void)_limitedUIDidChange:(id)a0;
- (void)_setInitialDisplayContext:(id)a0;
- (void)_accessibilityTraitFlagsChanged:(id)a0;
- (void)_beginObservingBacklightLevelNotifications;
- (void)_accessibilityForceTouchEnabledChanged:(id)a0;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)a0;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)a0;
- (BOOL)_isExternal;
- (void)_clearCarPlayHumanPresenceState;
- (void)_capturedStateUpdated:(BOOL)a0;
- (id)snapshotView;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (void)_externalDeviceNightModeDidChange:(id)a0;
- (void)_endObservingBacklightLevelNotifications;
- (BOOL)_isForceTouchCapable;
- (void)_updateAvailableDisplayModes;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_displayPeripheryInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_overrideReferenceBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneReferenceBounds;
- (double)_scale;
- (void)_updateUserInterfaceIdiom;
- (BOOL)_isOverscanned;
- (BOOL)_supportsDragging;
- (BOOL)_isCarInstrumentsScreen;
- (BOOL)_isMainScreenPointer;
- (void)_setCarPlayHumanPresenceInRange:(BOOL)a0;
- (void)_ensureComputedMainScreenDPI;
- (long long)_forceTouchCapability;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_traitCollectionDisplayCornerRadius;
- (BOOL)_isCarPlayNightModeEnabled;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)a0;
- (void)_willTransitionToTraitCollection:(id)a0;
- (BOOL)_areListsLimited;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (BOOL)_wantsWideContentMargins;
- (BOOL)_isUserInterfaceLimited:(unsigned long long)a0;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (BOOL)_supportsBrightness;
- (float)rawBrightnessForBacklightLevel:(float)a0;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nativeDisplayBounds;
- (double)_nativeScaleWithLevel:(unsigned long long)a0;
- (id)_preferredFocusedWindowScene;
- (id)_capabilityForKey:(id)a0;
- (long long)_imageOrientation;
- (double)_nativeScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBoundsInPixels;
- (double)_touchRadiusScaleFactor;
- (int)bitsPerComponent;
- (void)setBitsPerComponent:(int)a0;
- (BOOL)_expectsSecureRendering;
- (BOOL)_supportsCarPlayHumanPresence;
- (BOOL)_isCarPlayHumanPresenceInRange;
- (void)_prepareForWindow;
- (double)_nativePointsPerMillimeter;
- (BOOL)_isValidInterfaceOrientation:(long long)a0;
- (void)_resetUserInterfaceIdiom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_interfaceOrientedMainSceneBounds;
- (void)_setUserInterfaceStyleIfNecessary:(long long)a0 firstTimeOnly:(BOOL)a1;
- (id)_displayInfoProvider;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setCapability:(id)a0 forKey:(id)a1;
- (void)_setExternalDeviceShouldInputText:(BOOL)a0;
- (void)updateFocusIfNeeded;
- (BOOL)_isWorkspaceCapable;
- (long long)_workspaceCapableScreenType;
- (BOOL)_isSoftKeyboardLimited;
- (struct CGPoint { double x0; double x1; })_mainSceneOrigin;
- (id)_focusScrollManager;
- (id)_snapshotExcludingWindows:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_focusMovementPerformer;
- (id)_focusSystemManager;
- (BOOL)_isFocusSystemLoaded;
- (void)setFocusEnabled:(BOOL)a0;
- (BOOL)_supportsDeferredFocus;
- (void)_setScale:(double)a0;
- (id)fbsDisplay;
- (BOOL)_areMusicListsLimited;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForInterfaceOrientation:(long long)a0;
- (unsigned long long)_artworkSubtype;
- (void)_invalidate;
- (void)_setInterfaceOrientation:(long long)a0;
- (BOOL)_isRotatable;
- (void)_setNeedsNonDeferredFocusUpdate;
- (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;
- (id)_fallbackTraitCollection;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;
- (void)setNeedsFocusUpdate;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_peripheryInsets;
- (id)initWithDisplayConfiguration:(id)a0;
- (void)_updateCapabilities;
- (BOOL)_hasStatusBar;
- (void)_computeMetrics:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_regionForFocusedItem:(id)a0 inCoordinateSpace:(id)a1;
- (void)_updateDisplayConfiguration:(id)a0;
- (double)_maximumSupportedScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrame;
- (void)traitCollectionDidChange:(id)a0;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneFrame;
- (BOOL)_isRightHandDrive;
- (void)_updateTraits;
- (long long)_userInterfaceIdiom;
- (double)_pointsPerInch;

@end
