@class UIKeyboardPinchGestureRecognizer, UIGestureKeyboardIntroduction, NSMutableArray, NSString, NSMutableSet, _UIKeyboardTypingSpeedLogger, UIKBResizingKeyplaneCoordinator, NSTimer, NSMutableDictionary, UIKBRenderConfig, UIKeyboardHandBiasTransitionCoordinator, UIButton, UIKBTree, UIKBBackgroundView, UIView, UIKBKeyplaneView, NSLayoutConstraint, UISwipeGestureRecognizer, CADisplayLink, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, UIImageView, UISelectionFeedbackGenerator, UIKeyboardSplitTransitionView, UIDelayedAction, NSDate, NSNumber;
@protocol UIKeyboardLayoutStarDelegate, UITextCursorAssertion;

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder, UIKeyboardHandBiasTransitionCoordinatorDelegate, UIKBResizingKeyplaneCoordinatorCoordinatorDelegate, UIKeyboardPinchGestureRecognizerDelegate, UIKeyboardTypingStyleEstimatorDelegate, UIKBKeyplaneViewDelegate> {
    long long _appearance;
    UIKBTree *_inactiveLanguageIndicator;
    UIKBKeyplaneView *_keyplaneView;
    UIKBBackgroundView *_backgroundView;
    UIKBKeyViewAnimator *_keyViewAnimator;
    double _prevTouchUpTime;
    double _prevTouchUpFinishedTime;
    double _prevTouchDownTime;
    unsigned long long _prevUpActions;
    NSMutableDictionary *_keyboards;
    NSMutableDictionary *_allKeyplaneViews;
    NSMutableSet *_allKeyplaneKeycaps;
    NSMutableSet *_validInputStrings;
    struct __CFDictionary { } *_extendedTouchInfoMap;
    int _preferredTrackingChangeCount;
    int _shiftTrackingChangeCount;
    NSMutableSet *_accentInfo;
    NSMutableSet *_hasAccents;
    id _spaceTarget;
    SEL _spaceAction;
    SEL _spaceLongAction;
    id _returnTarget;
    SEL _returnAction;
    SEL _returnLongAction;
    id _deleteTarget;
    SEL _deleteAction;
    SEL _deleteLongAction;
    BOOL _settingShift;
    BOOL _holdingShift;
    BOOL _revertKeyplaneAfterTouch;
    BOOL _wasShifted;
    BOOL _swipeDetected;
    BOOL _suppressDeactivateKeys;
    BOOL _suppressShiftKeyplaneAnimation;
    BOOL _isTrackpadMode;
    BOOL _shiftLockReady;
    double _shiftLockFirstTapTime;
    UISwipeGestureRecognizer *_rightSwipeRecognizer;
    UISwipeGestureRecognizer *_leftSwipeRecognizer;
    UISwipeGestureRecognizer *_upSwipeRecognizer;
    UIKeyboardPinchGestureRecognizer *_pinchGestureRecognizer;
    NSMutableDictionary *_activeKeyplaneTransitions;
    UIKeyboardSplitTransitionView *_transitionView;
    double _initialSplitProgress;
    double _finalSplitProgress;
    double _autoSplitLastUpdate;
    double _autoSplitElapsedTime;
    CADisplayLink *_displayLink;
    BOOL _ghostKeysEnabled;
    UIDelayedAction *_delayedCentroidUpdate;
    BOOL _isRebuilding;
    long long _currentHandBias;
    UIKeyboardHandBiasTransitionCoordinator *_handBiasTransitionCoordinator;
    BOOL _preRotateShift;
    NSString *_preRotateKeyplaneName;
    BOOL _preRotateTrackpadMode;
    UIDelayedAction *_multitapAction;
    BOOL _unshiftAfterMultitap;
    int _multitapCount;
    UIKBTree *_multitapKey;
    UIView *_flickPopupView;
    NSMutableDictionary *_compositeImages;
    NSTimer *_flickPopuptimer;
    id _touchInfo;
    UIView *_dimKeyboardImageView;
    BOOL _keyboardImageViewIsDim;
    BOOL _isOutOfBounds;
    BOOL _inDealloc;
    NSMutableSet *_keysUnderIndicator;
    _UIKeyboardTypingSpeedLogger *_typingSpeedLogger;
    UIKBRenderConfig *_passcodeRenderConfig;
    long long _setKeyplaneViewCount;
    BOOL _inputTraitsPreventInitialReuse;
    BOOL _settingFloat;
    NSMutableSet *_leftKeySet;
    NSMutableSet *_rightKeySet;
    struct CGPoint { double x; double y; } _leftDriftOffset;
    struct CGPoint { double x; double y; } _rightDriftOffset;
    NSMutableArray *_leftSideReachability;
    NSMutableArray *_rightSideReachability;
    NSNumber *_homeRowHint;
    double _touchDownTimeSpan;
    NSDate *_prevTouchMoreKeyTime;
    NSDate *_prevProgressiveCandidateRequestTime;
    NSTimer *_progressiveCandidateUpdateTimer;
    NSString *_lastInputMode;
    BOOL _pendingDictationReload;
    BOOL _hasPeekedGestureKey;
    BOOL _lastInputIsGestureKey;
    UIGestureKeyboardIntroduction *_gestureKeyboardIntroduction;
    BOOL _dictationUsingServerManualEndpointing;
    UIKBResizingKeyplaneCoordinator *_resizingKeyplaneCoordinator;
    UIButton *_biasEscapeButton;
    NSLayoutConstraint *_biasEscapeButtonLeftConstraint;
    NSLayoutConstraint *_biasEscapeButtonRightConstraint;
    NSMutableSet *_keyplaneTransformations;
    UIImageView *_pathEffectGlowView;
    BOOL _isContinuousPathUnderway;
    UIView *_keyplaneTransformationAreaView;
    BOOL _externalDictationAndInternationalKeys;
    BOOL _showsPunctuationKeysOnPrimaryKeyplane;
}

@property (nonatomic) int playKeyClickSoundOn;
@property (nonatomic) BOOL muteNextKeyClickSound;
@property (retain, nonatomic) UISelectionFeedbackGenerator *slideBehaviour;
@property (retain, nonatomic) id<UITextCursorAssertion> blinkAssertion;
@property (nonatomic) id<UIKeyboardLayoutStarDelegate> delegate;
@property (readonly, nonatomic) UIKBTree *keyboard;
@property (readonly, nonatomic) UIKBTree *keyplane;
@property (readonly, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager;
@property (copy, nonatomic) NSString *keyboardName;
@property (copy, nonatomic) NSString *keyplaneName;
@property (readonly, nonatomic) NSString *localizedInputMode;
@property (copy, nonatomic) NSString *localizedInputKey;
@property (retain, nonatomic) UIKBTree *activeKey;
@property (nonatomic) BOOL shift;
@property (nonatomic) BOOL autoShift;
@property (nonatomic) BOOL didLongPress;
@property (readonly, nonatomic, getter=isRotating) BOOL rotating;
@property (readonly, nonatomic) BOOL showsInternationalKey;
@property (readonly, nonatomic) BOOL showsDictationKey;
@property (copy, nonatomic) NSString *preTouchKeyplaneName;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) NSString *layoutTag;
@property (retain, nonatomic) UIView *modalDisplayView;
@property (nonatomic) double lastTwoFingerTapTimestamp;
@property (readonly, nonatomic) BOOL hasActiveKeys;
@property (nonatomic) BOOL preventPaddlesForPointerTouches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPunctuationCharacterSet;
+ (id)keyboardWithName:(id)a0 screenTraits:(id)a1;
+ (Class)_subclassForScreenTraits:(id)a0;
+ (id)keyboardFromFactoryWithName:(id)a0 screen:(id)a1;
+ (struct CGSize { double x0; double x1; })keyboardSizeForInputMode:(id)a0 screenTraits:(id)a1 keyboardType:(long long)a2;
+ (void)accessibilitySensitivityChanged;
+ (id)sharedRivenKeyplaneGenerator;

- (struct CGImage { } *)renderedImageWithToken:(id)a0;
- (id)_currentKeyplaneTransformationContext;
- (id)getSortedKeysForDisplayRowHint:(int)a0;
- (void)touchChanged:(id)a0 executionContext:(id)a1;
- (BOOL)shouldUseDefaultShiftStateFromLayout;
- (void)updateBackgroundIfNeeded;
- (void)playKeyClickSoundOnUpForKey:(id)a0;
- (void)populateFlickPopupsForKey:(id)a0;
- (void)refreshForRivenPreferences;
- (BOOL)shouldRetestKey:(id)a0 slidOffKey:(id)a1 withKeyplane:(id)a2;
- (unsigned long long)upActionFlagsForKey:(id)a0;
- (void)finishSplitTransitionWithProgress:(double)a0;
- (id)cacheIdentifierForKeyplaneNamed:(id)a0;
- (int)stateForKey:(id)a0;
- (BOOL)isKeyScriptSwitchKey:(id)a0;
- (int)stateForMultitapForwardKey:(id)a0;
- (id)generateInfoForTouch:(id)a0;
- (id)popupKeyViews;
- (BOOL)keyHasAccentedVariants:(id)a0;
- (void)clearInfoForTouch:(id)a0 forResting:(BOOL)a1;
- (BOOL)shouldDeactivateWithoutWindow;
- (id)_variantsOfCurrencyKey:(id)a0 language:(id)a1;
- (id)_pathEffectView;
- (void)setState:(int)a0 forKey:(id)a1;
- (double)stretchFactorHeight;
- (void)handlePopupView:(id)a0;
- (BOOL)stretchKeyboardToFit;
- (id)initialKeyplaneNameWithKBStarName:(id)a0;
- (void)handleDismissFlickView;
- (BOOL)isResized;
- (void)deleteHandwritingStrokesAtIndexes:(id)a0;
- (void)clearInfoForTouch:(id)a0;
- (double)lastTouchDownTimestamp;
- (void)willBeginIndirectSelectionGesture:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLastKeyWithRepresentedString:(id)a0;
- (void)_gestureRecognizerFailed:(id)a0;
- (int)stateForKeyplaneSwitchKey:(id)a0;
- (void)completeDeleteActionForTouchDownWithActions:(unsigned long long)a0 executionContext:(id)a1;
- (BOOL)isDeadkeyInput:(id)a0;
- (int)stateForShiftKey:(id)a0;
- (void)didDetectPinchWithSeparation:(double)a0;
- (void)completeHitTestForTouchDown:(id)a0 executionContext:(id)a1;
- (BOOL)handleFlick:(id)a0;
- (void)updateKeyCentroids;
- (void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)a0;
- (void)_updateSupplementaryKeys;
- (void)multitapInterrupted;
- (int)displayTypeHintForShiftKey;
- (BOOL)pinchDetected;
- (void)updateGlobeKeyDisplayString;
- (void)showPopupVariantsForKey:(id)a0;
- (unsigned long long)textEditingKeyMask;
- (struct CGSize { double x0; double x1; })sizeForKeyplane:(id)a0;
- (void)updateCurrencySymbolForKey:(id)a0 withCurrencyString:(id)a1;
- (void)updateReturnKeysIfNeeded;
- (void)updateInputModeLocalizedKeysForKeyplane:(id)a0;
- (id)keyWithRepresentedString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_paddedKeyUnionFrame;
- (long long)currentHandBiasWithCoordinator:(id)a0;
- (BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
- (BOOL)shouldRetestTouchUp:(id)a0;
- (BOOL)isTrackpadMode;
- (void)pinchHandler:(id)a0;
- (void)_setBiasEscapeButtonVisible:(BOOL)a0;
- (void)updateCachedKeyplaneKeycaps;
- (void)finishSplitTransition;
- (id)keyViewHitTestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)touchInfoForKey:(id)a0;
- (id)keyplaneView:(id)a0 containingViewForActiveKey:(id)a1;
- (void)resetPanAlternativesForEndedTouch:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForKeylayoutName:(id)a0 onKeyplaneName:(id)a1;
- (void)uninstallGestureRecognizers;
- (void)resizeKeyplaneAndRedraw:(BOOL)a0;
- (void)updatePanAlternativesForTouchInfo:(id)a0;
- (void)prepareForFloatingTransition:(BOOL)a0;
- (void)setMultitapReverseKeyState;
- (void)handleKeyboardMenusForTouch:(id)a0;
- (BOOL)shouldAllowCurrentKeyplaneReload;
- (id)splitNameForKeyplane:(id)a0;
- (void)willRotate;
- (void)touchMultitapTimer;
- (void)updateKeyboardForKeyplane:(id)a0;
- (void)upActionShift;
- (double)lastTouchUpTimestamp;
- (void)_transitionToContinuousPathState:(long long)a0 forTouchInfo:(id)a1;
- (id)infoForTouch:(id)a0;
- (void)updateLocalizedDisplayStringsForKeys:(id)a0;
- (id)keyHitTestWithoutCharging:(struct CGPoint { double x0; double x1; })a0;
- (void)transitionToPunctuationKeysVisible:(BOOL)a0;
- (id)multitapCompleteKeys;
- (void)updateTransitionWithFlags:(unsigned long long)a0;
- (void)cancelMultitapTimer;
- (void)rebuildSplitTransitionView;
- (void)transitionToModalContinuousPathKeyplane;
- (BOOL)shouldShowGestureKeyboardIntroduction;
- (BOOL)canAddRomanSwitchKey;
- (BOOL)is10KeyRendering;
- (void)cancelDelayedCentroidUpdate;
- (BOOL)supportStylingWithKey:(id)a0;
- (id)keyHitTestClosestToPoint:(struct CGPoint { double x0; double x1; })a0 inKeys:(id)a1;
- (BOOL)shouldIgnoreDistantKey;
- (void)incrementPunctuationIfNeeded:(id)a0;
- (BOOL)shouldSkipResponseToGlobeKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)cacheTokenForKeyplane:(id)a0 caseAlternates:(BOOL)a1;
- (void)deactivateActiveKey;
- (void)finishSplitWithCompletion:(id /* block */)a0;
- (id)keyHitTestContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldShowDictationKey;
- (id)defaultKeyplaneForKeyplane:(id)a0;
- (void)_autoSplit:(id)a0;
- (BOOL)_shouldAttemptToAddSupplementaryControlKeys;
- (void)handleDismissFlickView:(id)a0;
- (BOOL)useUndoForMessagesWriteboard;
- (void)showPopupView:(long long)a0 withKey:(id)a1 popupInfo:(id)a2 force:(BOOL)a3;
- (id)keyplaneNameForRevertAfterTouch;
- (BOOL)pinchCanBeginWithTouches:(id)a0 andScale:(double)a1;
- (id)inputModeToMergeCapsLockKey;
- (BOOL)touchPassesDragThreshold:(id)a0;
- (void)dismissGestureKeyboardIntroduction;
- (void)setSplitProgress:(double)a0;
- (void)endMultitapForKey:(id)a0;
- (BOOL)keyplaneUsesResizingOffset;
- (int)stateForStylingKey:(id)a0;
- (BOOL)shouldPreventInputManagerHitTestingForKey:(id)a0;
- (void)_transformCarPlayIfNecessary;
- (void)completeSendStringActionForTouchUp:(id)a0 withActions:(unsigned long long)a1 timestamp:(double)a2 interval:(double)a3 didLongPress:(BOOL)a4 prevActions:(unsigned long long)a5 executionContext:(id)a6;
- (void)updateShiftKeyState;
- (BOOL)pinchSplitGestureEnabled;
- (BOOL)isLongPressedKey:(id)a0;
- (void)updateState:(int)a0 forKey:(id)a1;
- (void)reloadCurrentKeyplane;
- (id)keyHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)keyplaneShiftState;
- (int)stateForDictationKey:(id)a0;
- (void)showMenu:(id)a0 forKey:(id)a1;
- (BOOL)shouldMatchCaseForDomainKeys;
- (void)cleanupPreviousKeyboardWithNewInputTraits:(id)a0;
- (void)installGestureRecognizers;
- (void)setToInitialKeyplane;
- (BOOL)_allowPaddle;
- (BOOL)shouldSendTouchUpToInputManager:(id)a0;
- (void)performHitTestForTouchInfo:(id)a0 touchStage:(int)a1 executionContextPassingUIKBTree:(id)a2;
- (void)updatePhysicalKeyboardEvent:(id)a0 withMarkedInput:(id)a1;
- (int)keycodeForKey:(id)a0;
- (BOOL)allKeyplanesHaveSameHeight;
- (id)_variantsByAppendingDualStringKey:(id)a0 toVariants:(id)a1;
- (void)updateLayoutTags;
- (int)visualStyleForKeyboardIfSplit:(BOOL)a0;
- (BOOL)showGestureKeyboardIntroductionIfNeeded;
- (void)finishSplitTransitionWithCompletion:(id /* block */)a0;
- (id)splitNameForKeyplaneName:(id)a0;
- (id)multitapForwardKeys;
- (BOOL)keyplaneSupportsResizingGesture;
- (void)setSplit:(BOOL)a0 animated:(BOOL)a1;
- (long long)defaultSelectedVariantIndexForKey:(id)a0 withActions:(unsigned long long)a1;
- (void)didBeginContinuousPath;
- (void)didTriggerDestructiveRenderConfigChange;
- (void)prepareSliderBehaviorFeedback;
- (id)keyViewAnimator;
- (void)prepareForSplitTransition;
- (id)hostViewForResizingKeyplane:(id)a0;
- (void)didRotate;
- (id)infoForTouchUUID:(id)a0;
- (void)setKeyForTouchInfo:(id)a0 key:(id)a1;
- (void)showKeyboardWithInputMode:(id)a0 renderConfig:(id)a1 inputTraits:(id)a2 screenTraits:(id)a3 splitTraits:(id)a4;
- (id)keyForKeyboardName:(id)a0 screenTraits:(id)a1;
- (void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void)divideKeysIntoLeft:(id)a0 right:(id)a1;
- (void)clearAllTouchInfo;
- (void)updateSelectedVariantIndexForKey:(id)a0 withActions:(unsigned long long)a1 withPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)flushKeyCache:(id)a0;
- (BOOL)_stringContainsCurrencyCharacters:(id)a0;
- (void)completeSendStringActionForTouchDownWithKey:(id)a0 withActions:(unsigned long long)a1 executionContext:(id)a2;
- (int)displayTypeHintForMoreKey;
- (void)logHandwritingData;
- (int)stateForMultitapReverseKey:(id)a0;
- (BOOL)shouldMergeKey:(id)a0;
- (id)handRestRecognizerGetHomeRowHint;
- (id)_appendingSecondaryStringToVariantsTop:(id)a0 secondaryString:(id)a1 withDirection:(id)a2;
- (void)updateLocalizedKeysForKeyplane:(id)a0 updateAllKeyplanes:(BOOL)a1;
- (void)pinchDidConsumeTouch:(id)a0;
- (void)finishContinuousPathView:(BOOL)a0;
- (void)playKeyClickSoundForKey:(id)a0;
- (struct CGImage { } *)cachedCompositeImageWithCacheKey:(id)a0;
- (BOOL)supportsContinuousPath;
- (BOOL)isDeveloperGestureKeybaord;
- (int)stateForCandidateListKey:(id)a0;
- (id)currentKeyplaneView;
- (void)showFlickView:(long long)a0 withKey:(id)a1 flickString:(id)a2;
- (void)setKeyboardDim:(BOOL)a0 amount:(double)a1 withDuration:(double)a2;
- (void)handlePopupView;
- (void)clearKeyAnnotationsIfNecessary;
- (void)setKeyboardDim:(BOOL)a0;
- (BOOL)stretchKeyboardToFitKeyplane:(id)a0;
- (void)multitapExpired;
- (void)showSplitTransitionView:(BOOL)a0;
- (void)finishHandBiasTransitionWithFinalBias:(long long)a0;
- (void)provideSliderBehaviorFeedback;
- (void)_recordKeystrokeStatisticForKeyPress;
- (void)updateMoreAndInternationalKeys;
- (void)completeHitTestForTouchDragged:(id)a0 hitKey:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dragGestureRectInView:(id)a0;
- (long long)currentHandBias;
- (void)handRestRecognizerNotifyRestForBegin:(BOOL)a0 location:(struct CGPoint { double x0; double x1; })a1 timestamp:(double)a2 pathIndex:(int)a3 touchUUID:(id)a4 context:(id)a5;
- (BOOL)_continuousPathModalPunctuationPlaneEnabled;
- (void)_setReturnKeyEnabled:(BOOL)a0 withDisplayName:(id)a1 withType:(int)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)a0;
- (void)setPreferredHeight:(double)a0;
- (void)setKeyboardAppearance:(long long)a0;
- (void)calculateReachabilityScoreWithKey:(id)a0 keyError:(struct CGPoint { double x0; double x1; })a1;
- (void)refreshDualStringKeys;
- (BOOL)canProduceString:(id)a0;
- (BOOL)isGeometricShiftOrMoreKeyForTouch:(id)a0;
- (void)restoreDefaultsForAllKeys;
- (void)setHideKeysUnderIndicator:(BOOL)a0;
- (void)playKeyClickSoundOnDownForKey:(id)a0;
- (id)simulateTouchForCharacter:(id)a0 errorVector:(struct CGPoint { double x0; double x1; })a1 shouldTypeVariants:(BOOL)a2 baseKeyForVariants:(BOOL)a3;
- (void)restoreDefaultsForKey:(id)a0;
- (BOOL)keyplaneContainsDismissKey;
- (void)willMoveToWindow:(id)a0;
- (void)_cleanUpBlinkAssertionIfNecessary;
- (void)_addResizeTransformationIfNecessary;
- (void)_addExtraControlKeysIfNecessary;
- (BOOL)diacriticForwardCompose;
- (BOOL)ignoreWriteboard;
- (void)clearUnusedObjects:(BOOL)a0;
- (id)activeMultitapCompleteKey;
- (void)_didChangeKeyplaneWithContext:(id)a0;
- (void)finishSliderBehaviorFeedback;
- (BOOL)hasCandidateKeys;
- (id)baseKeyForString:(id)a0;
- (void)updateLocalizedKeys:(BOOL)a0;
- (unsigned long long)downActionFlagsForKey:(id)a0;
- (void)clearHandwritingStrokesIfNeededAndNotify:(BOOL)a0;
- (void)handleDelayedCentroidUpdate;
- (void)touchCancelled:(id)a0 forResting:(BOOL)a1 executionContext:(id)a2;
- (void)dealloc;
- (void)setReturnKeyEnabled:(BOOL)a0 withDisplayName:(id)a1 withType:(int)a2;
- (BOOL)canForceTouchUUIDCommit:(id)a0 inWindow:(id)a1;
- (struct CGSize { double x0; double x1; })handRestRecognizerStandardKeyPixelSize;
- (BOOL)_handleTouchForEmojiInputView;
- (double)hitBuffer;
- (id)internationalKeyDisplayStringOnEmojiKeyboard;
- (void)removeFromSuperview;
- (void)triggerSpaceKeyplaneSwitchIfNecessary;
- (void)setDisableInteraction:(BOOL)a0;
- (id)flickStringForInputKey:(id)a0 direction:(long long)a1;
- (BOOL)shouldShowInternationalMenuForKey:(id)a0;
- (void)continueFromInternationalActionForTouchUp:(id)a0 withActions:(unsigned long long)a1 timestamp:(double)a2 interval:(double)a3 didLongPress:(BOOL)a4 prevActions:(unsigned long long)a5 executionContext:(id)a6;
- (struct CGPoint { double x0; double x1; })getCenterForKeyUnderRightIndexFinger;
- (BOOL)isResizing;
- (BOOL)keyplaneContainsEmojiKey;
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)a0 clearingDimming:(BOOL)a1;
- (void)setTextEditingTraits:(id)a0;
- (unsigned long long)targetEdgesForScreenGestureRecognition;
- (BOOL)_continuousPathSpotlightEffectEnabled;
- (void)updateBackgroundCorners;
- (void)setNeedsVirtualDriftUpdate;
- (void)setTarget:(id)a0 forKey:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)usesAutoShift;
- (void)setKeyboardBias:(long long)a0;
- (BOOL)canReuseKeyplaneView;
- (id)keylistContainingKey:(id)a0;
- (id)keyplaneForKey:(id)a0;
- (void)fadeWithInvocation:(id)a0;
- (id)defaultNameForKeyplaneName:(id)a0;
- (void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)a0 withInputMode:(id)a1;
- (BOOL)shouldSendStringForFlick:(id)a0;
- (void)mergeKeysIfNeeded;
- (unsigned char)getHandRestRecognizerState;
- (void)updateGlobeKeyAndLayoutOriginBeforeSnapshotForInputView:(id)a0;
- (void)nextToUseInputModeDidChange:(id)a0;
- (BOOL)shouldAllowSelectionGestures:(BOOL)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;
- (BOOL)performReturnAction;
- (id)createKeyEventForStringAction:(id)a0 forKey:(id)a1 touchInfo:(id)a2 inputFlags:(int)a3;
- (void)_transformFloatingKeyboardIfNecessary;
- (BOOL)supportsEmoji;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateUndoKeyState;
- (void)touchDownWithKey:(id)a0 withTouchInfo:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 executionContext:(id)a3;
- (void)setPasscodeOutlineAlpha:(double)a0;
- (BOOL)shouldMergeAssistantBarWithKeyboardLayout;
- (struct CGPoint { double x0; double x1; })getCenterForKeyUnderLeftIndexFinger;
- (void)downActionShiftWithKey:(id)a0;
- (void)changeToKeyplane:(id)a0;
- (void)willBeginIndirectSelectionGesture;
- (BOOL)isShiftKeyPlaneChooser;
- (void)layoutSubviews;
- (id)createKeyEventForStringAction:(id)a0 forKey:(id)a1 inputFlags:(int)a2;
- (void)updateAutolocalizedKeysForKeyplane:(id)a0;
- (int)stateForManipulationKey:(id)a0;
- (BOOL)_handRestRecognizerCancelShouldBeEnd;
- (void)setAutoshift:(BOOL)a0;
- (void)handleMultitapTimerFired;
- (struct CGPoint { double x0; double x1; })applyError:(struct CGPoint { double x0; double x1; })a0 toKey:(id)a1;
- (BOOL)globeKeyDisplaysAsEmojiKey;
- (BOOL)shouldRetestTouchDraggedFromKey:(id)a0;
- (void)_swapGlobeAndMoreKeysIfNecessary;
- (id)unprocessedTouchEventsForTouchInfo:(id)a0 touchStage:(int)a1 forcedKeyCode:(int)a2;
- (void)relayoutForWriteboardKey;
- (void)touchDown:(id)a0 executionContext:(id)a1;
- (id)currentRepresentedStringForDualDisplayKey:(id)a0;
- (struct CGImage { } *)renderedImageWithStateFallbacksForToken:(id)a0;
- (void)didEndIndirectSelectionGesture:(BOOL)a0;
- (void)presentModalDisplayForKey:(id)a0;
- (id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)a0;
- (BOOL)hasActiveContinuousPathInput;
- (void)clearTransientState;
- (void)showKeyboardWithInputTraits:(id)a0 screenTraits:(id)a1 splitTraits:(id)a2;
- (void)_didTapBiasEscapeButton:(id)a0;
- (double)biasedKeyboardWidthRatio;
- (BOOL)performSpaceAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchDragged:(id)a0 executionContext:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0 forHandBiasCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForKeyWithRepresentedString:(id)a0;
- (struct CGSize { double x0; double x1; })stretchFactor;
- (void)touchDragged:(id)a0;
- (BOOL)hasAccentKey;
- (void)updateLocalizedKeysOnKeyplane:(id)a0;
- (void)cancelTouchIfNecessaryForInfo:(id)a0 forResting:(BOOL)a1;
- (BOOL)ignoresShiftState;
- (id)prepareTransition:(id)a0 forTargetHandBias:(long long)a1 coordinator:(id)a2;
- (void)clearContinuousPathView;
- (void)typingStyleEstimator:(id)a0 didChangeTypingStyleEstimate:(unsigned long long)a1;
- (void)longPressAction;
- (void)completeCommitTouchesPrecedingTouchDownWithKey:(id)a0 withActions:(unsigned long long)a1 executionContext:(id)a2;
- (void)deactivateActiveKeys;
- (id)candidateList;
- (BOOL)useDismissForMessagesWriteboard;
- (BOOL)_allowStartingContinuousPathForTouchInfo:(id)a0 alreadyActiveKeyExisting:(BOOL)a1;
- (id)currentKeyplane;
- (id)_keyplaneVariantsKeyForString:(id)a0;
- (void)traitCollectionDidChange;
- (id)hostViewForHandBiasTransition:(id)a0;
- (void)setAction:(SEL)a0 forKey:(id)a1;
- (void)addContinuousPathPoint:(struct CGPoint { double x0; double x1; })a0 withTimestamp:(double)a1;
- (id)synthesizeTouchUpEventForKey:(id)a0;
- (BOOL)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)a0;
- (BOOL)_pointAllowedInStaticHitBuffer:(struct CGPoint { double x0; double x1; })a0;
- (struct CGImage { } *)renderedKeyplaneWithToken:(id)a0 split:(BOOL)a1;
- (BOOL)showsDedicatedEmojiKeyAlongsideGlobeButton;
- (id)keyplaneNamed:(id)a0;
- (void)touchCancelled:(id)a0 executionContext:(id)a1;
- (BOOL)isKanaPlane;
- (BOOL)shouldYieldToControlCenterForFlickWithInitialPoint:(struct CGPoint { double x0; double x1; })a0 finalPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setLabel:(id)a0 forKey:(id)a1;
- (void)refreshForDictationAvailablityDidChange;
- (void)accessibilitySensitivityChanged;
- (id)keyHitTestClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isMultitapKey:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)refreshGhostKeyState;
- (id /* block */)handRestRecognizerSilenceNextTouchDown;
- (void)annotateKeysWithDeveloperPunctuation;
- (void)didClearInput;
- (id)simulateTouch:(struct CGPoint { double x0; double x1; })a0;
- (void)resetHRRLayoutState;
- (BOOL)shouldHitTestKey:(id)a0;
- (id)activationIndicatorView;
- (id)flickPopupStringForKey:(id)a0 withString:(id)a1;
- (id)highlightedVariantListForStylingKey:(id)a0;
- (void)completeRetestForTouchUp:(id)a0 timestamp:(double)a1 interval:(double)a2 executionContext:(id)a3;
- (void)tearDownSplitTransitionView;
- (void)setLongPressAction:(SEL)a0 forKey:(id)a1;
- (BOOL)isEmojiKeyplane;
- (SEL)handlerForNotification:(id)a0;
- (id)activeTouchInfoForShift;
- (id)_keyboardLongPressInteractionRegions;
- (BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 forRestingState:(unsigned long long)a3 otherRestedTouchLocations:(id)a4;
- (void)touchUp:(id)a0 executionContext:(id)a1;
- (BOOL)isAlphabeticPlane;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForKeylayoutName:(id)a0;
- (void)swipeDetected:(id)a0;
- (BOOL)shouldShowIndicator;
- (BOOL)_allowContinuousPathUI;
- (void)didEndIndirectSelectionGesture;
- (BOOL)canMultitap;
- (void)playKeyReleaseSoundForKey:(id)a0;
- (BOOL)isHandwritingPlane;
- (void)cancelTouchesForTwoFingerTapGesture:(id)a0;
- (void)setKeyboardName:(id)a0 appearance:(long long)a1;
- (void)setTwoFingerTapTimestamp:(double)a0;
- (BOOL)isShiftKeyBeingHeld;

@end
