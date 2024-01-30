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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)textField;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)canReload;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)prepareForReuse;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)value;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)isEditing;
- (BOOL)canResignFirstResponder;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (id)_defaultTextColor;
- (void)setPlaceholderText:(id)a0;
- (void)setCellEnabled:(BOOL)a0;
- (void)controlChanged:(id)a0;
- (BOOL)_cellIsEditing;
- (void)_saveForExit;
- (void)_setValueChanged;
- (void)cellRemovedFromView;
- (void)endEditingAndSave;
- (BOOL)isTextFieldEditing;
- (void)setValueChangedTarget:(id)a0 action:(SEL)a1 specifier:(id)a2;

@end
