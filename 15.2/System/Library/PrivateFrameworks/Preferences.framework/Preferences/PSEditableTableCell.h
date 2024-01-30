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

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (id)textField;
- (void)layoutSubviews;
- (BOOL)isFirstResponder;
- (void)setPlaceholderText:(id)a0;
- (BOOL)canResignFirstResponder;
- (void)setValue:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (id)_defaultTextColor;
- (void)setCellEnabled:(BOOL)a0;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;
- (void)cellRemovedFromView;
- (id)value;
- (void)setDelegate:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)prepareForReuse;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setTitle:(id)a0;
- (BOOL)isEditing;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)controlChanged:(id)a0;
- (BOOL)_cellIsEditing;
- (void)_setValueChanged;
- (void)endEditingAndSave;
- (BOOL)isTextFieldEditing;
- (void)_saveForExit;

@end
