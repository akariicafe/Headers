@class NSString, WFTextTokenEditorView, NSSet, WFMultipleValueEditorViewCellContext, MTVisualStylingProvider, UIViewController, WFParameterEditorModel, CKComponentHostingView;
@protocol WFVariableProvider, WFComponentNavigationContext, WFMultipleValueEditorViewCellDelegate, WFVariableUIDelegate;

@interface WFMultipleValueEditorViewCell : WFMaterialStylableTableViewCell <CKComponentProvider, CKComponentHostingViewDelegate, WFParameterEventObserver, WFVariableUIDelegate, WFTextTokenEditorViewDelegate>

@property (readonly, nonatomic) WFTextTokenEditorView *valueEditor;
@property (retain, nonatomic) WFMultipleValueEditorViewCellContext *hostingViewContext;
@property (retain, nonatomic) CKComponentHostingView *hostingView;
@property (retain, nonatomic) WFParameterEditorModel *model;
@property (nonatomic) double lastWidth;
@property (weak, nonatomic) id<WFMultipleValueEditorViewCellDelegate> delegate;
@property (weak, nonatomic) UIViewController *containingViewController;
@property (weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) BOOL variablesDisabled;
@property (nonatomic) long long widgetFamily;
@property (retain, nonatomic) MTVisualStylingProvider *strokeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentForModel:(id)a0 context:(id)a1;
+ (id)singleButtonSlotForParameter:(id)a0 state:(id)a1 widgetFamily:(long long)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)buttonTapped:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateModel:(id)a0;
- (void)parameterAttributesDidChange:(id)a0;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowShortcutInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)textTokenEditorTextDidEndEditing:(id)a0;
- (void)beginEditingWithContext:(id)a0;
- (void)notifyDelegateTextUpdated;
- (void)updatedParameterState:(id)a0;
- (void)componentHostingViewDidInvalidateSize:(id)a0;
- (BOOL)shouldShowTextEditor;
- (void)configureValueEditor;

@end
