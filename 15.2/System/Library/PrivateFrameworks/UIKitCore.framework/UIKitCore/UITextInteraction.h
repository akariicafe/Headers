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

- (id)rangeWithTextAlternatives:(id *)a0 atPosition:(id)a1;
- (BOOL)shouldAllowWithTouchTypes:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 toBegin:(BOOL)a2;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)_transientState;
- (BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)a0 forGestureRecognizer:(id)a1;
- (void)finishSetup;
- (void)addChild:(id)a0;
- (id)_textInput;
- (BOOL)doesControlDelegate;
- (id)interactionWithClass:(Class)a0;
- (void).cxx_destruct;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3 forTouchType:(long long)a4;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)interaction_gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)removeChild:(id)a0;
- (id)recognizerForName:(id)a0;
- (void)_createFeedbackIfNecessary;
- (void)addGestureRecognizer:(id)a0 withName:(id)a1;
- (BOOL)currentSelectionContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelLinkInteractionSession;
- (BOOL)_textInputIsInteractive;
- (void)_prepareFeedbackForGesture;
- (void)disableClearsOnInsertion;
- (BOOL)interaction_gestureRecognizerShouldBegin:(id)a0;
- (void)_playFeedbackForCursorMovement;
- (void)_cancelRecognizerWithName:(id)a0;
- (id)interactionWithGestureForName:(id)a0;
- (void)_cleanUpFeedbackForGesture;
- (void)_setLinkInteractionSession:(id)a0;
- (BOOL)selection:(id)a0 containsPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldHandleFormGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateTextInputSourceForScribbleGesture:(id)a0;
- (void)removeGestureRecognizerWithName:(id)a0;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)_callDelegateWillMoveTextRangeExtentAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)linkInteractionSession;
- (void)_performGestureType:(long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 locationOfFirstTouch:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)_shouldObscureTextInput;
- (BOOL)_textInputLivesInKeyWindow;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)a0;
- (BOOL)containerChangesSelectionOnOneFingerTap;
- (double)distanceBetweenPoint:(struct CGPoint { double x0; double x1; })a0 andRects:(id)a1;
- (id)defaultTripleTapRecognizerWithAction:(SEL)a0;
- (id)defaultTapRecognizerWithAction:(SEL)a0;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)a0;
- (void)_applyTransientState:(id)a0;

@end
