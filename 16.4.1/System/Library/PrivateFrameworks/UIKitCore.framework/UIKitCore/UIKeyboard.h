@class UIView, NSString, UITapGestureRecognizer, UITextCursorAssertionController, NSArray, NSMutableDictionary, UITextInputTraits, _UIKeyboardPasscodeObscuringInteraction;

@interface UIKeyboard : UIView <UIKBFocusGuideDelegate, UIKeyboardImplGeometryDelegate> {
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    UITextInputTraits *m_overrideTraits;
    BOOL m_typingDisabled;
    BOOL m_minimized;
    BOOL m_respondingToImplGeometryChange;
    long long m_orientation;
    BOOL m_hasExplicitOrientation;
    BOOL m_disableTouchInput;
    BOOL m_useLinearLayout;
    BOOL m_useRecentsAlert;
    NSMutableDictionary *m_focusGuides;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } m_unfocusedFocusGuideOutsets;
    _UIKeyboardPasscodeObscuringInteraction *_passcodeObscuringInteraction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _forcedFrame;
    UITapGestureRecognizer *_variantsMenuGesture;
    NSArray *_implConstraints;
}

@property (class, nonatomic) unsigned long long serviceRole;

@property (nonatomic) BOOL hasImpendingCursorLocation;
@property (nonatomic) unsigned long long impendingCursorLocation;
@property (nonatomic) unsigned long long requestedInteractionModel;
@property (nonatomic) BOOL caretBlinks;
@property (nonatomic) BOOL caretVisible;
@property (readonly, nonatomic) UITextCursorAssertionController *_activeAssertionController;
@property (nonatomic) long long keyboardIdiom;
@property (nonatomic) BOOL shouldUpdateLayoutAutomatically;
@property (nonatomic) BOOL typingEnabled;
@property (nonatomic, getter=isMinimized) BOOL minimized;
@property (nonatomic) BOOL showsCandidatesInline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllDynamicDictionaries;
+ (struct CGSize { double x0; double x1; })defaultSizeForInterfaceOrientation:(long long)a0;
+ (BOOL)isInHardwareKeyboardMode;
+ (struct CGSize { double x0; double x1; })sizeForInterfaceOrientation:(long long)a0 ignoreInputView:(BOOL)a1;
+ (BOOL)isOnScreen;
+ (struct CGSize { double x0; double x1; })keyboardSizeForInterfaceOrientation:(long long)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })keyplanePadding;
+ (struct CGSize { double x0; double x1; })sizeForInterfaceOrientation:(long long)a0;
+ (BOOL)hasInputOrAssistantViewsOnScreen;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (BOOL)isSpotlight;
+ (BOOL)isInputSystemUI;
+ (void)_clearActiveKeyboard;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keyboardFocusGuideMargins;
+ (id)activeKeyboard;
+ (id)activeKeyboardForScreen:(id)a0;
+ (BOOL)candidateDisplayIsExtended;
+ (void)clearActiveForScreen:(id)a0;
+ (id)currentDocumentState;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrameForInterfaceOrientation:(long long)a0;
+ (id)homeGestureExclusionZones;
+ (void)initImplementationNow;
+ (BOOL)inputUIOOP;
+ (BOOL)isKeyboardProcess;
+ (BOOL)isMajelEnabled;
+ (BOOL)isMajelSupported;
+ (BOOL)isModelessActive;
+ (BOOL)isShowingEmojiSearch;
+ (id)keyboardApplicationIdentifier;
+ (id)keyboardBundleIdentifier;
+ (void)makeKeyboardActive:(id)a0 forScreen:(id)a1;
+ (BOOL)platformSupportsKeyboardServiceRole:(unsigned long long)a0;
+ (double)predictionViewHeightForCurrentInputMode;
+ (BOOL)predictionViewPrewarmsPredictiveCandidates;
+ (void)resetServiceRole;
+ (BOOL)respondsToProxGesture;
+ (void)setKeyboardAlpha:(double)a0;
+ (void)setPredictionViewPrewarmsPredictiveCandidates:(BOOL)a0;
+ (void)setSuppressionPolicyDelegate:(id)a0;
+ (BOOL)shouldExtendKeyboardInputUI;
+ (BOOL)shouldMinimizeForHardwareKeyboard;
+ (BOOL)shouldSuppressSoftwareKeyboardForResponder:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForInterfaceOrientation:(long long)a0 includingAssistantBar:(BOOL)a1 ignoreInputView:(BOOL)a2;
+ (id)snapshotViewForOptions:(unsigned long long)a0;
+ (id)snapshotViewForPredictionViewTransition;
+ (BOOL)splitKeyboardEnabled;
+ (id)suppressionPolicyDelegate;
+ (BOOL)usesInputSystemUI;
+ (BOOL)usesLocalKeyboard;

- (id)_getAutocorrection;
- (void)acceptAutocorrectionWithCompletionHandler:(id /* block */)a0;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)acceptAutocorrection;
- (long long)_positionInCandidateList:(id)a0;
- (void)updateLayout;
- (id)_getCurrentKeyplaneName;
- (id)_getCurrentKeyboardName;
- (void)_setAutocorrects:(BOOL)a0;
- (void)displayLayer:(id)a0;
- (id)_getLocalizedInputMode;
- (void)setOrientation:(long long)a0;
- (void)setReturnKeyEnabled:(BOOL)a0;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)_hasCandidates;
- (void)deactivate;
- (BOOL)returnKeyEnabled;
- (void)_showAutofillExtras;
- (void)removeAutocorrectPrompt;
- (void)setDefaultTextInputTraits:(id)a0;
- (void)responseContextDidChange;
- (void)geometryChangeDone:(BOOL)a0;
- (id)delegate;
- (void)_setRenderConfig:(id)a0;
- (unsigned long long)cursorLocation;
- (void)maximize;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setCursorLocation:(unsigned long long)a0;
- (void)minimize;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setDisableInteraction:(BOOL)a0;
- (void)_wheelChangedWithEvent:(id)a0;
- (void)didMoveToWindow;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (int)textEffectsVisibilityLevel;
- (void)setNeedsDisplay;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)prepareForImplBoundsHeightChange:(double)a0 suppressNotification:(BOOL)a1;
- (void)setCorrectionLearningAllowed:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didChangeKeyplaneWithContext:(id)a0;
- (BOOL)disableInteraction;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (BOOL)canBecomeFocused;
- (BOOL)canHandleEvent:(id)a0;
- (void)remoteControlReceivedWithEvent:(id)a0;
- (void)prepareForGeometryChange;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (long long)interfaceOrientation;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)isActive;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)defaultTextInputTraits;
- (void)implBoundsHeightChangeDone:(double)a0 suppressNotification:(BOOL)a1;
- (void)activate;
- (BOOL)_isAutomaticKeyboard;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAutomatic;
- (id)_keyplaneNamed:(id)a0;
- (id)_typeCharacter:(id)a0 withError:(struct CGPoint { double x0; double x1; })a1 shouldTypeVariants:(BOOL)a2 baseKeyForVariants:(BOOL)a3;
- (id)createPathEffectViewIfNecessary;
- (void)_acceptCurrentCandidate;
- (id)_baseKeyForRepresentedString:(id)a0;
- (void)_changeToKeyplane:(id)a0;
- (void)_deactivateForBackgrounding;
- (void)_didChangeCandidateList;
- (void)_didChangeCursorLocation;
- (BOOL)_disableTouchInput;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_floatingKeyboardDraggableRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusCastingFrameForHeading:(unsigned long long)a0 inCoordinateSpace:(id)a1;
- (long long)_focusTouchSensitivityStyle;
- (long long)_focusedSound;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lazily:(BOOL)a1;
- (id)_keyplaneForKey:(id)a0;
- (BOOL)_mayRemainFocused;
- (id)_overrideTextInputTraits;
- (void)_setDisableTouchInput:(BOOL)a0;
- (void)_setDisableUpdateMaskForSecureTextEntry:(BOOL)a0;
- (void)_setInputMode:(id)a0;
- (void)_setPasscodeOutlineAlpha:(double)a0;
- (void)_setPreferredHeight:(double)a0;
- (void)_setSplit:(BOOL)a0;
- (void)_setUndocked:(BOOL)a0;
- (void)_setUseLinearLayout:(BOOL)a0;
- (void)_setUseRecentsAlert:(BOOL)a0;
- (void)_toggleVariantsMenuGesture:(BOOL)a0;
- (id)_touchPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (BOOL)_useLinearLayout;
- (BOOL)_useRecentsAlert;
- (void)activateIfNeeded;
- (BOOL)allowExternalChangeForFocusHeading:(unsigned long long)a0 cursorLocation:(unsigned long long)a1;
- (void)autoAdjustOrientation;
- (BOOL)canDismiss;
- (void)clearActivePerScreenIfNeeded;
- (void)clearSnapshot;
- (void)didFocusGuideWithHeading:(unsigned long long)a0;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })geometryForImplHeightDelta:(double)a0;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })geometryForMinimize:(BOOL)a0;
- (BOOL)hasAutocorrectPrompt;
- (id)initLazily;
- (id)initWithDefaultSize;
- (id)initWithRequestedInteractionModel:(unsigned long long)a0;
- (BOOL)isActivePerScreen;
- (void)keyboardMinMaximized:(BOOL)a0;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedIn;
- (void)manualKeyboardWillBeOrderedOut;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setUnfocusedFocusGuideOutsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 fromView:(id)a1;
- (void)set_overrideTextInputTraits:(id)a0;
- (void)setupKeyFocusGuides;
- (BOOL)shouldSaveMinimizationState;
- (BOOL)showPredictionBar;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)takeSnapshot;
- (id)targetWindow;
- (void)textInputTraitsDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })unfocusedFocusGuideOutsets;
- (void)updateFocusMarginsUpToView:(id)a0;
- (void)updateKeyFocusGuides;

@end
