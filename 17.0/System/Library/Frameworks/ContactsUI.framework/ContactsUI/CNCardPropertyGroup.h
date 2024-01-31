@class CNContactStore, NSArray, NSString, CNPolicy, NSDictionary;

@interface CNCardPropertyGroup : CNCardGroup {
    NSArray *_displayItems;
    NSArray *_editingItems;
    NSArray *_originalEditingItems;
}

@property (retain, nonatomic) NSArray *editingItems;
@property (retain, nonatomic) NSArray *deletedItems;
@property (nonatomic) BOOL hasReorderedItems;
@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSArray *propertyItems;
@property (readonly, nonatomic) CNPolicy *policy;
@property (readonly, nonatomic) NSDictionary *linkedPolicies;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL showActionsWhenEmpty;
@property (nonatomic) BOOL allowsDisplayModePickerActions;
@property (readonly, nonatomic, getter=isMultiValue) BOOL multiValue;
@property (readonly, nonatomic, getter=isFixedValue) BOOL fixedValue;
@property (readonly, nonatomic, getter=isMultiLine) BOOL multiLine;
@property (readonly, nonatomic) BOOL allowsAdding;
@property (readonly, nonatomic) BOOL modified;
@property (nonatomic) BOOL isAdded;

+ (id)groupForProperty:(id)a0 contact:(id)a1 store:(id)a2 policy:(id)a3 linkedPolicies:(id)a4;

- (id)displayItems;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isRequired;
- (BOOL)addEditingItem:(id)a0;
- (BOOL)labelsAreUnique;
- (id)lastEditingItem;
- (BOOL)_arrayContainsMaxAllowedItems:(id)a0;
- (id)_availableLabelsInLabels:(id)a0 forItem:(id)a1 withValueSelector:(SEL)a2 usedLabelsCount:(long long *)a3;
- (id)_itemToBeMergedWith:(id)a0 fromItems:(id)a1 forEditing:(BOOL)a2;
- (id)_loadPropertyItems;
- (id)_mergeItems:(id)a0 forEditing:(BOOL)a1;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableLabel;
- (id)_nextAvailableLabelInLabels:(id)a0 withValueSelector:(SEL)a1;
- (id)_nextAvailableSocialService;
- (BOOL)_shouldShowGroupWhenEditing:(BOOL)a0;
- (void)_updateNameValuesForItems:(id)a0;
- (BOOL)addEditingItem;
- (BOOL)canAddEditingItem;
- (id)initWithProperty:(id)a0 contact:(id)a1 store:(id)a2 policy:(id)a3 linkedPolicies:(id)a4;
- (id)itemsUsingLabel:(id)a0;
- (id)labelsForItem:(id)a0 options:(unsigned long long)a1;
- (id)labelsInUseByGroup;
- (BOOL)moveEditingItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (id)nextAvailableLabel;
- (id)policyForItem:(id)a0;
- (Class)propertyGroupItemClass;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (void)removeEditingItem:(id)a0;
- (void)saveChanges;
- (void)saveChangesForItems:(id)a0;
- (long long)valueEditingItemsCount;

@end
