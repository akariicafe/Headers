@class NSString, UIColor, PSListController;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {
    UIColor *_textColor;
    id _delegate;
    BOOL _forceFirstResponder;
    BOOL _delaySpecifierRelease;
    SEL _targetSetter;
    id _realTarget;
    BOOL _valueChanged;
}

@property (readonly, nonatomic) BOOL returnKeyTapped;
@property (weak, nonatomic) PSListController *controllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)setCellEnabled:(BOOL)a0;
- (BOOL)isEditing;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void).cxx_destruct;
- (void)cellRemovedFromView;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)dealloc;
- (void)textFieldDidEndEditing:(id)a0;
- (id)value;
- (void)prepareForReuse;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;
- (BOOL)canBecomeFirstResponder;
- (void)setTitle:(id)a0;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (void)setDelegate:(id)a0;
- (id)textField;
- (void)setValue:(id)a0;
- (void)controlChanged:(id)a0;
- (id)_defaultTextColor;
- (void)setPlaceholderText:(id)a0;
- (BOOL)isTextFieldEditing;
- (void)_setValueChanged;
- (void)_saveForExit;
- (void)endEditingAndSave;
- (BOOL)_cellIsEditing;

@end
