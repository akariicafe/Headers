@class WFTextTokenEditorView, UIView;

@interface WFDictionaryEditorViewCell : WFListEditorViewCell

@property (readonly, weak, nonatomic) UIView *separatorView;
@property (readonly, weak, nonatomic) WFTextTokenEditorView *keyEditor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setValue:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (id)valueTitle;
- (void)setVariableProvider:(id)a0;
- (void)setAllowedVariableTypes:(id)a0;
- (void)setVariablesDisabled:(BOOL)a0;
- (id)valueEditorValue;
- (void)updateWithValueState:(id)a0;
- (void)beginEditingWithContext:(id)a0;
- (void)updateEditorBlocks;
- (void)configureEditorViewController:(id)a0;

@end
