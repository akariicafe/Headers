@class _UIStatesFeedbackGenerator, UIView, UITextCursorAssertionController, UITextInteractionInputDelegate, NSMutableDictionary, UILongPressGestureRecognizer, UIResponder, NSMutableArray, NSArray, NSString;
@protocol UITextInteractionDelegate, UITextInput, UITextInteraction_AssistantDelegate;

@interface UITextInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    UITextInteraction *_parent;
    BOOL _viewOverridesInteractivityState;
}

@property (class, readonly, nonatomic) double _maximumBeamSnappingLength;

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UITextInteractionInputDelegate *interactionInputDelegate;
@property (weak, nonatomic) id<UITextInteraction_AssistantDelegate> assistantDelegate;
@property (readonly, weak) UITextInteraction *parent;
@property (readonly, weak) UITextInteraction *root;
@property (readonly, nonatomic) NSMutableArray *children;
@property (readonly, nonatomic) NSMutableArray *gestures;
@property (readonly, nonatomic) NSMutableDictionary *gestureMap;
@property (nonatomic, setter=setInGesture:) BOOL inGesture;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackBehaviour;
@property (readonly, nonatomic) long long textInteractionSet;
@property (readonly, nonatomic) UITextCursorAssertionController *_assertionController;
@property (retain, nonatomic) UILongPressGestureRecognizer *_customHighlighterGesture;
@property (nonatomic, setter=_setAllowsSelectionCommands:) BOOL _allowsSelectionCommands;
@property (weak, nonatomic) id<UITextInteractionDelegate> delegate;
@property (weak, nonatomic) UIResponder<UITextInput> *textInput;
@property (readonly, nonatomic) long long textInteractionMode;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textInteractionForMode:(long long)a0;
+ (id)textInteractionsForSet:(long long)a0;

- (BOOL)interaction_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)shouldAllowWithTouchTypes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;
- (void)finishSetup;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (id)rangeWithTextAlternatives:(id *)a0 atPosition:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)willMoveToView:(id)a0;
- (void)addChild:(id)a0;
- (void)_applyTransientState:(id)a0;
- (id)init;
- (id)_transientState;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 forTouchType:(long long)a4;
- (id)defaultTapRecognizerWithAction:(SEL)a0;
- (void)_callDelegateWillMoveTextRangeExtentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_cancelRecognizerWithName:(id)a0;
- (void)_cleanUpFeedbackForGesture;
- (void)_createFeedbackIfNecessary;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)a0;
- (void)_playFeedbackForCursorMovement;
- (void)_prepareFeedbackForGesture;
- (void)_setLinkInteractionSession:(id)a0;
- (BOOL)_shouldObscureTextInput;
- (id)_textInput;
- (BOOL)_textInputIsInteractive;
- (BOOL)_textInputLivesInKeyWindow;
- (id)_updatedAccessibilityTextMenuWithMenuElements:(id)a0;
- (void)addGestureRecognizer:(id)a0 withName:(id)a1;
- (void)addIndirectChild:(id)a0;
- (void)cancelLinkInteractionSession;
- (BOOL)containerChangesSelectionOnOneFingerTap;
- (BOOL)currentSelectionContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)a0;
- (id)defaultTripleTapRecognizerWithAction:(SEL)a0;
- (void)disableClearsOnInsertion;
- (double)distanceBetweenPoint:(struct CGPoint { double x0; double x1; })a0 andRects:(id)a1;
- (BOOL)doesControlDelegate;
- (id)interactionWithClass:(Class)a0;
- (id)interactionWithGestureForName:(id)a0;
- (id)linkInteractionSession;
- (id)recognizerForName:(id)a0;
- (void)removeChild:(id)a0;
- (void)removeGestureRecognizerWithName:(id)a0;
- (BOOL)selection:(id)a0 containsPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateTextInputSourceForScribbleGesture:(id)a0;

@end
