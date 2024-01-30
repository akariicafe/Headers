@interface UIKBAnalyticsDispatcher : NSObject

+ (void)candidateViewExtended:(id)a0 direction:(id)a1;
+ (void)emojiPopoverSummoned:(id)a0 appendsEmoji:(BOOL)a1;
+ (void)analyticsDispatchEventTextEditingOperation:(id)a0 trigger:(id)a1;
+ (id)allowedValuesForType:(id)a0;
+ (void)keyboardCameraSessionEndedForTextContentType:(id)a0 didFindText:(BOOL)a1 didInsertText:(BOOL)a2 sender:(id)a3;
+ (id)currentInputMode;
+ (void)keyboardShortcutInvokedWithKeyCommand:(id)a0 keyEvent:(id)a1 keyboardProperties:(id)a2;
+ (void)keyplaneSwitched:(int)a0;
+ (void)floatingKeyboardSummonedEvent:(id)a0 trigger:(id)a1 finalPosition:(struct CGPoint { double x0; double x1; })a2;
+ (id)preferredEventName:(id)a0;
+ (void)handwritingResized:(id)a0;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)a0;
+ (void)dispatchFloatingKeyboardEventOfType:(id)a0 trigger:(id)a1 pinnedToEdge:(id)a2 position:(struct CGPoint { double x0; double x1; })a3 touchUpPosition:(struct CGPoint { double x0; double x1; })a4;
+ (void)globeKeyEducationShown:(double)a0;
+ (void)editingSessionEnded:(unsigned long long)a0;
+ (void)emojiInsertedByMethod:(id)a0 inputType:(id)a1;
+ (void)globeKeySelected;
+ (void)floatingKeyboardMoved:(id)a0 toPosition:(struct CGPoint { double x0; double x1; })a1 touchPosition:(struct CGPoint { double x0; double x1; })a2;
+ (void)globeKeyLongPress;
+ (void)sessionAnalyticsEnded:(id)a0;
+ (void)deleteKeySelected:(int)a0;

@end
