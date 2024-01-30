@class NSString, NSArray, NSSet, UITableView;
@protocol WFVariableProvider, WFListEditorViewDelegate, WFComponentNavigationContext, WFVariableUIDelegate;

@interface WFListEditorView : UIView <UITableViewDataSource, UITableViewDelegatePrivate, WFListEditorViewCellDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (weak, nonatomic) id<WFListEditorViewDelegate> delegate;
@property (nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;
@property (copy, nonatomic) NSString *localizedNewItemTypeName;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSSet *allowedValueTypes;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) BOOL variablesDisabled;
@property (nonatomic) BOOL standaloneVariablesAsContentItems;
@property (weak, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;

- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)deleteItemAtIndex:(unsigned long long)a0;
- (id)accessibilityElements;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (BOOL)isAccessibilityElement;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyboardWillChangeFrame:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)_setItems:(id)a0;
- (void)beginEditingWithContext:(id)a0;
- (void)listEditorCell:(id)a0 didUpdateToValue:(id)a1;
- (void)updatedItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)movedItemAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)updateCells;
- (void)configureCell:(id)a0 withItem:(id)a1 atIndex:(unsigned long long)a2;
- (void)configureCell:(id)a0 atIndex:(unsigned long long)a1;
- (id)addNewItemIndexPath;
- (void)appendNewItem;
- (void)insertNewItemOfType:(long long)a0;

@end
