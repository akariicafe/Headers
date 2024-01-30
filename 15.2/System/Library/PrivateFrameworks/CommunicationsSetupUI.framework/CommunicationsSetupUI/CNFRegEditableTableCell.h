@class CNFRegShadowView, UIImage;

@interface CNFRegEditableTableCell : PSEditableTableCell {
    SEL _emptyStateSelector;
    SEL _didBeginEditingSelector;
    SEL _didEndEditingSelector;
    id _textChangeObserver;
    BOOL _textFieldIsEmpty;
}

@property (retain, nonatomic) CNFRegShadowView *shadowView;
@property (nonatomic) BOOL skipDelegateCallback;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *customCheckmarkImage;
@property (retain, nonatomic) UIImage *customCheckmarkImageSelected;

- (void)layoutSubviews;
- (void)setChecked:(BOOL)a0;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (void)setTitle:(id)a0;
- (void)dealloc;
- (void)textFieldChangedExternally;
- (void)_updateTextFieldOffsetWithDict:(id)a0;
- (void)_handleTextChanged;
- (BOOL)_textFieldIsCurrentlyEmpty;
- (void)notifyTextFieldEmptyStateChanged:(BOOL)a0;
- (void)notifyTextFieldDidBeginEditing;
- (void)notifyTextFieldDidEndEditing;
- (void)_startListeningForTextChanges;
- (void)_stopListeningForTextChanges;

@end
