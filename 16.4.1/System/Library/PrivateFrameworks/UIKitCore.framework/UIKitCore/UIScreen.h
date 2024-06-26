@class FBSDisplayConfiguration, CARSessionStatus, BKSHIDEventDisplay, UISDisplayContext, NSDictionary, _UIScreenBoundingPathUtilities, UIScreenMode, UIView, NSString, UIFocusSystem, UITraitCollection, UISoftwareDimmingWindow, _UIInteractiveHighlightEnvironment, NSArray, _UIDragManager, _UIScreenFixedCoordinateSpace, NSMutableSet, UIWindow;
@protocol UIFocusEnvironment, _UIFocusRegionContainer, UIFocusItemContainer, UICoordinateSpace, UIFocusItem, _UIDisplayInfoProviding;

@interface UIScreen : NSObject <_UIOrientationDebugDescriptionProviding, _UIFallbackEnvironment, UICoordinateSpace, BSDebugDescriptionProviding, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment> {
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
    BKSHIDEventDisplay *__eventDisplay;
    long long _screenType;
    long long _lastUpdatedCanvasUserInterfaceStyle;
    struct { unsigned char bitsPerComponent : 4; unsigned char initialized : 1; unsigned char connected : 1; unsigned char needsDisconnection : 1; unsigned char hasSetOverscanCompensation : 1; unsigned char overscanCompensation : 2; unsigned char wantsWideContentMargins : 1; unsigned char queriedDeviceContentMargins : 1; unsigned char hasCalculatedPointsPerInch : 1; unsigned char rightHandDrive : 1; unsigned char carPlayNightModeEnabled : 1; unsigned char isUpdatingInterfaceOrientation : 1; } _screenFlags;
    struct { unsigned char isKnown : 1; unsigned char isSupported : 1; unsigned char isInRange : 1; } _carPlayHumanPresenceStatus;
    BOOL _isFakeScreen;
    NSMutableSet *_disconnectionPreventionAssertions;
}

@property (class, readonly, nonatomic) NSArray *screens;
@property (class, readonly, nonatomic) UIScreen *mainScreen;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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
@property (readonly, nonatomic) double _displayCornerRadiusIgnoringZoom;
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
@property (readonly, nonatomic) long long referenceDisplayModeStatus;
@property (readonly, nonatomic) double currentEDRHeadroom;
@property (readonly, nonatomic) double potentialEDRHeadroom;
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
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

+ (void)initialize;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1;
+ (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toView:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toView:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
+ (BOOL)_supportsInvalidatingFocusCache;
+ (id)_screenForScene:(id)a0;
+ (id)_embeddedScreen;
+ (void)_FBSDisplayConfigurationConnected:(id)a0 andNotify:(BOOL)a1;
+ (void)_FBSDisplayConfigurationConnected:(id)a0 andNotify:(BOOL)a1 forceMain:(BOOL)a2;
+ (void)_FBSDisplayConfigurationConnected:(id)a0 forInitialDisplayContext:(id)a1 andNotify:(BOOL)a2 forceMain:(BOOL)a3;
+ (void)_FBSDisplayDidPossiblyConnect:(id)a0;
+ (void)_FBSDisplayDidPossiblyConnect:(id)a0 withScene:(id)a1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)a0 withScene:(id)a1 andPost:(BOOL)a2;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)a0;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)a0 forSceneDestruction:(id)a1;
+ (void)_FBSDisplayIdentityDisconnected:(id)a0;
+ (id)__displayConfigurationsForViewService;
+ (id)_carScreen;
+ (void)_enumerateScreensWithBlock:(id /* block */)a0;
+ (BOOL)_isProbablyBeingRecorded;
+ (id)_mainScreenThreadSafeTraitCollection;
+ (void)_prepareScreensForAppResume;
+ (id)_screenWithDisplayName:(id)a0;
+ (id)_screenWithEventDisplay:(id)a0;
+ (id)_screenWithFBSDisplayIdentity:(id)a0;
+ (id)_screenWithIntegerDisplayID:(unsigned int)a0;
+ (id)_shortScreensDescription;
+ (BOOL)_shouldDisableJail;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForScreenOriginRotation:(double)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToRotateScreen:(double)a0;

- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)_capabilities;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)displayIdentity;
- (id)snapshotView;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)_displayInfoProvider;
- (id)succinctDescriptionBuilder;
- (long long)_interfaceOrientation;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_setUserInterfaceIdiom:(long long)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromCoordinateSpace:(id)a1;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toCoordinateSpace:(id)a1;
- (void)_updateCapabilities;
- (id)snapshot;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_display;
- (void)setNeedsFocusUpdate;
- (void)traitCollectionDidChange:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)updateFocusIfNeeded;
- (double)_rotation;
- (void)_invalidate;
- (void).cxx_destruct;
- (double)_scale;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_name;
- (double)_latency;
- (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;
- (unsigned long long)_artworkSubtype;
- (void)_clearCarPlayHumanPresenceState;
- (void)_computeMetrics;
- (void)_setReferenceDisplayModeStatus:(long long)a0;
- (float)rawBrightnessForBacklightLevel:(float)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForInterfaceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneFrame;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;
- (void)_accessibilityBoldTextChanged:(id)a0;
- (void)_accessibilityForceTouchEnabledChanged:(id)a0;
- (void)_accessibilityTraitFlagsChanged:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)a0 usingStatusbarHeight:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameForInterfaceOrientation:(long long)a0 usingStatusbarHeight:(double)a1 ignoreStatusBar:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)a0 usingStatusbarHeight:(double)a1 ignoreStatusBar:(BOOL)a2;
- (BOOL)_areListsLimited;
- (BOOL)_areMusicListsLimited;
- (void)_beginObservingBacklightLevelNotifications;
- (id)_capabilityForKey:(id)a0;
- (void)_capturedStateUpdated:(BOOL)a0;
- (void)_computeMetrics:(BOOL)a0;
- (void)_connectScreen;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)a0;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_disconnectScreen;
- (double)_displayCornerRadius;
- (id)_displayID;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_displayPeripheryInsets;
- (long long)_effectiveUserInterfaceStyle;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureComputedMainScreenDPI;
- (id)_eventDisplay;
- (id)_exclusionArea;
- (BOOL)_expectsSecureRendering;
- (void)_externalDeviceNightModeDidChange:(id)a0;
- (void *)_fallbackTraitCollection;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (id)_focusMovementPerformer;
- (id)_focusScrollManager;
- (id)_focusSystemManager;
- (long long)_forceTouchCapability;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)a0;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)a0;
- (BOOL)_hasWindows;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_interfaceOrientedMainSceneBounds;
- (BOOL)_isCarInstrumentsScreen;
- (BOOL)_isCarPlayHumanPresenceInRange;
- (BOOL)_isCarPlayNightModeEnabled;
- (BOOL)_isCarScreen;
- (BOOL)_isEmbeddedScreen;
- (BOOL)_isExternal;
- (BOOL)_isFocusSystemLoaded;
- (BOOL)_isForceTouchCapable;
- (BOOL)_isMainLikeScreen;
- (BOOL)_isOverscanned;
- (BOOL)_isRightHandDrive;
- (BOOL)_isRotatable;
- (BOOL)_isSoftKeyboardLimited;
- (BOOL)_isUserInterfaceLimited:(unsigned long long)a0;
- (BOOL)_isValidInterfaceOrientation:(long long)a0;
- (BOOL)_isWorkspaceCapable;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_lazySoftwareDimmingWindow;
- (void)_limitedUIDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneBoundsForInterfaceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainSceneReferenceBounds;
- (long long)_maximumFramesPerSecond;
- (double)_maximumSupportedScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nativeDisplayBounds;
- (double)_nativePointsPerMillimeter;
- (double)_nativeScale;
- (double)_nativeScaleWithLevel:(unsigned long long)a0;
- (void)_notifyTraitsChangedAndPropagate;
- (id)_orientationDebugDescription;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_overrideReferenceBounds;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_peripheryInsets;
- (double)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (id)_preferredFocusedWindowScene;
- (void)_prepareForWindow;
- (double)_refreshRate;
- (void)_resetUserInterfaceIdiom;
- (long long)_screenType;
- (unsigned int)_seed;
- (void)_setCapability:(id)a0 forKey:(id)a1;
- (void)_setCarPlayHumanPresenceInRange:(BOOL)a0;
- (void)_setExternalDeviceShouldInputText:(BOOL)a0;
- (void)_setInitialDisplayContext:(id)a0;
- (void)_setInterfaceOrientation:(long long)a0;
- (void)_setInterfaceOrientation:(long long)a0 andNotify:(BOOL)a1;
- (void)_setScale:(double)a0;
- (void)_setUserInterfaceStyleIfNecessary:(long long)a0 firstTimeOnly:(BOOL)a1;
- (id)_snapshotExcludingWindows:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_supportsBrightness;
- (BOOL)_supportsCarPlayHumanPresence;
- (BOOL)_supportsDeferredFocus;
- (BOOL)_supportsDragging;
- (double)_touchRadiusScaleFactor;
- (double)_traitCollectionDisplayCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBoundsForInterfaceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateDisplayConfiguration:(id)a0;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (long long)_userInterfaceIdiom;
- (BOOL)_wantsWideContentMargins;
- (int)bitsPerComponent;
- (id)fbsDisplay;
- (long long)gamut;
- (id)initWithDisplayConfiguration:(id)a0 forceMainScreen:(BOOL)a1;
- (void)setBitsPerComponent:(int)a0;
- (void)setFocusEnabled:(BOOL)a0;

@end
