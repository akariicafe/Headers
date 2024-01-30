@class UIColor, NSString, NSArray, WFMultipleValueParameterState, NSSet, UITableView, WFParameter, WFModuleSummaryEditor, NSIndexPath;
@protocol WFVariableProvider, WFComponentNavigationContext, WFMultipleValueEditorViewDelegate, WFVariableUIDelegate;

@interface WFMultipleValueEditorView : UIView <UITableViewDataSource, UITableViewDelegatePrivate, WFMultipleValueEditorViewCellDelegate, WFModuleSummaryEditorDelegate>

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor;
@property (retain, nonatomic) NSIndexPath *textEditingCellIndexPath;
@property (readonly, nonatomic) NSString *addNewItemCellTitle;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WFParameter *parameter;
@property (copy, nonatomic) WFMultipleValueParameterState *state;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (weak, nonatomic) id<WFMultipleValueEditorViewDelegate> delegate;
@property (copy, nonatomic) NSString *localizedNewItemTypeName;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) BOOL variablesDisabled;
@property (nonatomic) long long widgetFamily;
@property (weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (retain, nonatomic) UIColor *overridingCellBackgroundColor;
@property (retain, nonatomic) id fillProvider;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setState:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)accessibilityElements;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)deleteItemAtIndex:(unsigned long long)a0;
- (void)beginEditingWithContext:(id)a0;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditorDidRequestTextEntry:(id)a0;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;
- (void)multipleValueEditorViewCell:(id)a0 didUpdateParameterState:(id)a1;
- (void)multipleValueEditorViewCellDidRequestEditing:(id)a0;
- (void)multipleValueEditorViewCellDidInvalidateSize:(id)a0;
- (void)updatedItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)movedItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)addNewItemAtIndexPath:(id)a0;
- (void)editItemAtIndexPath:(id)a0;
- (void)updateCells;
- (void)configureCell:(id)a0 withItem:(id)a1 atIndex:(unsigned long long)a2;
- (void)configureCell:(id)a0 atIndex:(unsigned long long)a1;
- (id)addNewItemIndexPath;
- (id)reuseIdentifierForIndexPath:(id)a0;

@end
