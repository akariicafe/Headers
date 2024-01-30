@interface UIKBAnalyticsDispatcher : NSObject

+ (void)emojiPopoverSummoned:(id)a0 appendsEmoji:(BOOL)a1;
+ (void)globeKeyEducationShown:(double)a0;
+ (id)preferredEventName:(id)a0;
+ (void)floatingKeyboardMoved:(id)a0 toPosition:(struct CGPoint { double x0; double x1; })a1 touchPosition:(struct CGPoint { double x0; double x1; })a2;
+ (void)floatingKeyboardSummonedEvent:(id)a0 trigger:(id)a1 finalPosition:(struct CGPoint { double x0; double x1; })a2;
+ (void)analyticsDispatchEventTextEditingOperation:(id)a0 trigger:(id)a1;
+ (void)sessionAnalyticsEnded:(id)a0;
+ (id)allowedValuesForTextEditingPreferredFieldName:(id)a0;
+ (void)candidateViewExtended:(id)a0 direction:(id)a1;
+ (void)dispatchFloatingKeyboardEventOfType:(id)a0 trigger:(id)a1 pinnedToEdge:(id)a2 position:(struct CGPoint { double x0; double x1; })a3 touchUpPosition:(struct CGPoint { double x0; double x1; })a4;
+ (void)handwritingResized:(id)a0;
+ (id)currentInputMode;
+ (id)allowedValuesForType:(id)a0;
+ (void)globeKeyLongPress;
+ (void)emojiInsertedByMethod:(id)a0 inputType:(id)a1;

@end
