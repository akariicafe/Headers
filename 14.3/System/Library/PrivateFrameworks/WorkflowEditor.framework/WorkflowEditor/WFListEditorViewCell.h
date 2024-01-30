@class WFTextTokenChooser, NSString, WFTextTokenEditorView, NSSet, WFPropertyListParameterValue, UIButton, WFVariableConfigurationButton, UIViewController;
@protocol WFVariableProvider, WFListEditorViewCellDelegate, WFComponentNavigationContext, WFVariableUIDelegate, NSObject;

@interface WFListEditorViewCell : UITableViewCell <WFTextTokenEditorViewDelegate, WFListEditorViewDelegate, WFVariableUIDelegate>

@property (readonly, nonatomic) WFTextTokenEditorView *valueEditor;
@property (readonly, nonatomic) WFVariableConfigurationButton *variableValueButton;
@property (readonly, nonatomic) UIButton *valueButton;
@property (readonly, nonatomic) WFPropertyListParameterValue *valueEditorValue;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (copy, nonatomic) id /* block */ updateStateBlock;
@property (retain, nonatomic) WFTextTokenChooser *textTokenChooser;
@property (weak, nonatomic) id<WFListEditorViewCellDelegate> delegate;
@property (weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) BOOL standaloneVariablesAsContentItems;
@property (nonatomic) BOOL variablesDisabled;
@property (copy, nonatomic) id<NSObject> value;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)valueTitle;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowExtensionInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)listEditorView:(id)a0 didUpdateWithItem:(id)a1;
- (void)textTokenEditorTextDidChange:(id)a0;
- (void)textTokenEditorTextDidEndEditing:(id)a0;
- (void)setValueButtonTitle:(id)a0;
- (void)collectionValueUpdatedWithCount:(unsigned long long)a0;
- (void)updateValueEditorWithValue:(id)a0;
- (void)updateWithValueState:(id)a0;
- (void)valueButtonTapped:(id)a0;
- (void)beginEditingWithContext:(id)a0;
- (void)updateEditorBlocks;
- (void)configureEditorViewController:(id)a0;
- (void)notifyDelegateTextUpdated;
- (void)notifyDelegateTextUpdatedThrottled;
- (void)updateValueEditorResultType;
- (void)variableValueChanged:(id)a0;
- (void)variableValueCleared:(id)a0;

@end
