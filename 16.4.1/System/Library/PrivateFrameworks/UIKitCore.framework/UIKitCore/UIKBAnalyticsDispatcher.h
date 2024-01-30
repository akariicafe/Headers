@interface UIKBAnalyticsDispatcher : NSObject

+ (void)editingSessionEnded:(unsigned long long)a0;
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)a0 keyEvent:(id)a1 keyboardProperties:(id)a2;
+ (void)keyboardCameraSessionEndedForTextContentType:(id)a0 didFindText:(BOOL)a1 didInsertText:(BOOL)a2 sender:(id)a3;
+ (id)preferredEventName:(id)a0;
+ (void)sessionActionAnalyticsEnded:(id)a0;
+ (void)keyboardAnalyticsDispatchWithSelector:(SEL)a0 withTrigger:(id)a1;
+ (id)allowedValuesForType:(id)a0;
+ (id)currentInputMode;
+ (void)globeKeySelected;
+ (void)emojiPopoverSummoned:(id)a0 appendsEmoji:(BOOL)a1;
+ (void)decrementAllowCursorMovementCount;
+ (void)analyticsDispatchEventTextEditingOperation:(id)a0 trigger:(id)a1;
+ (void)dispatchFloatingKeyboardEventOfType:(id)a0 trigger:(id)a1 pinnedToEdge:(id)a2 position:(struct CGPoint { double x0; double x1; })a3 touchUpPosition:(struct CGPoint { double x0; double x1; })a4;
+ (void)floatingKeyboardSummonedEvent:(id)a0 trigger:(id)a1 finalPosition:(struct CGPoint { double x0; double x1; })a2;
+ (void)deleteKeySelected:(int)a0;
+ (void)hapticEventEngineDuration:(double)a0 startCount:(unsigned long long)a1 actionCount:(unsigned long long)a2;
+ (void)candidateViewExtended:(id)a0 direction:(id)a1;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)a0;
+ (void)sessionEfficacyAnalyticsEnded:(id)a0;
+ (void)floatingKeyboardMoved:(id)a0 toPosition:(struct CGPoint { double x0; double x1; })a1 touchPosition:(struct CGPoint { double x0; double x1; })a2;
+ (void)emojiInsertedByMethod:(id)a0 inputType:(id)a1;
+ (void)sessionAnalyticsEnded:(id)a0;
+ (void)incrementAllowCursorMovementCount;
+ (void)handwritingResized:(id)a0;
+ (void)keyplaneSwitched:(int)a0;
+ (void)globeKeyLongPress;
+ (void)globeKeyEducationShown:(double)a0;

@end
