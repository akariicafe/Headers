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

- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)setChecked:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;
- (void)_updateTextFieldOffsetWithDict:(id)a0;
- (void)_handleTextChanged;
- (void)_startListeningForTextChanges;
- (void)_stopListeningForTextChanges;
- (BOOL)_textFieldIsCurrentlyEmpty;
- (void)notifyTextFieldDidBeginEditing;
- (void)notifyTextFieldDidEndEditing;
- (void)notifyTextFieldEmptyStateChanged:(BOOL)a0;
- (void)textFieldChangedExternally;

@end
