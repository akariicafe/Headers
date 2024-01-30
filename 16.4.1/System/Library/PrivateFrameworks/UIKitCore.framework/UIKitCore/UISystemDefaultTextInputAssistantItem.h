@class NSArray;
@protocol UISystemDefaultTextInputAssistantItemDelegate;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem

@property (nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (retain, nonatomic) NSArray *defaultSystemLeadingBarButtonGroups;
@property (retain, nonatomic) NSArray *defaultSystemTrailingBarButtonGroups;
@property (weak, nonatomic) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;
@property (readonly, nonatomic) BOOL isKeyboardCameraItem;

- (void)assistantItalic;
- (void)assistantBold;
- (void)_updateIsSystemItem;
- (void)assistantExpand;
- (void)assistantPaste:(id)a0 forEvent:(id)a1;
- (void)performSystemButtonActionForStyle:(long long)a0;
- (void)setTrailingBarButtonGroups:(id)a0;
- (void)assistantShowKeyboard;
- (void)assistantDictation;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)a0;
- (void)assistantWriteboard;
- (void)assistantEmoji;
- (void)assistantUnderline;
- (void)assistantDismiss;
- (void)analyticsDispatchWithActionStyle:(long long)a0;
- (id)init;
- (void)assistantRedo;
- (void)assistantCut;
- (void)setLeadingBarButtonGroups:(id)a0;
- (void)assistantDictationMicOn;
- (BOOL)canPerformSystemButtonActionForStyle:(long long)a0;
- (void)assistantCopy;
- (void)assistantReturnKey;
- (void)assistantUndo;
- (void).cxx_destruct;

@end
