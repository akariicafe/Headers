@class NSArray;
@protocol UISystemDefaultTextInputAssistantItemDelegate;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem

@property (nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (retain, nonatomic) NSArray *defaultSystemLeadingBarButtonGroups;
@property (retain, nonatomic) NSArray *defaultSystemTrailingBarButtonGroups;
@property (weak, nonatomic) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;

- (void)assistantUnderline;
- (void)assistantRedo;
- (id)init;
- (void).cxx_destruct;
- (void)assistantUndo;
- (void)_updateIsSystemItem;
- (void)assistantCut;
- (void)assistantShowKeyboard;
- (void)setTrailingBarButtonGroups:(id)a0;
- (void)assistantItalic;
- (void)assistantBold;
- (void)performSystemButtonActionForStyle:(long long)a0;
- (void)assistantDictation;
- (void)assistantWriteboard;
- (void)assistantCopy;
- (BOOL)canPerformSystemButtonActionForStyle:(long long)a0;
- (void)assistantPaste;
- (void)assistantDismiss;
- (void)setLeadingBarButtonGroups:(id)a0;
- (void)assistantEmoji;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)a0;
- (void)analyticsDispatchWithActionStyle:(long long)a0;

@end
