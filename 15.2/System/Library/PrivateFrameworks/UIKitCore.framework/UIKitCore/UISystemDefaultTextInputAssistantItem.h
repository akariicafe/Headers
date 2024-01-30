@class NSArray;
@protocol UISystemDefaultTextInputAssistantItemDelegate;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem

@property (nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (retain, nonatomic) NSArray *defaultSystemLeadingBarButtonGroups;
@property (retain, nonatomic) NSArray *defaultSystemTrailingBarButtonGroups;
@property (weak, nonatomic) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;
@property (readonly, nonatomic) BOOL isKeyboardCameraItem;

- (void)assistantCopy;
- (void)assistantRedo;
- (void)assistantBold;
- (void)assistantItalic;
- (void)assistantUndo;
- (void)assistantUnderline;
- (void)assistantEmoji;
- (void)assistantDictation;
- (void)assistantDismiss;
- (void)assistantShowKeyboard;
- (void)assistantWriteboard;
- (void)assistantExpand;
- (void)_updateIsSystemItem;
- (void)performSystemButtonActionForStyle:(long long)a0;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)a0;
- (BOOL)canPerformSystemButtonActionForStyle:(long long)a0;
- (void)analyticsDispatchWithActionStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setLeadingBarButtonGroups:(id)a0;
- (void)assistantPaste:(id)a0 forEvent:(id)a1;
- (void)setTrailingBarButtonGroups:(id)a0;
- (void)assistantCut;

@end
