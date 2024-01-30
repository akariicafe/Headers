@class CNContactStore, NSArray, NSString, CNPolicy, NSDictionary;

@interface CNCardPropertyGroup : CNCardGroup {
    NSArray *_displayItems;
    NSArray *_editingItems;
    NSArray *_originalEditingItems;
}

@property (retain, nonatomic) NSArray *editingItems;
@property (retain, nonatomic) NSArray *deletedItems;
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

- (void).cxx_destruct;
- (Class)propertyGroupItemClass;
- (id)description;
- (id)displayItems;
- (id)nextAvailableLabel;
- (BOOL)addEditingItem;
- (id)lastEditingItem;
- (id)initWithProperty:(id)a0 contact:(id)a1 store:(id)a2 policy:(id)a3 linkedPolicies:(id)a4;
- (void)removeEditingItem:(id)a0;
- (void)reloadDataPreservingChanges:(BOOL)a0;
- (BOOL)labelsAreUnique;
- (id)_loadPropertyItems;
- (id)_mergeItems:(id)a0 forEditing:(BOOL)a1;
- (BOOL)_shouldShowGroupWhenEditing:(BOOL)a0;
- (id)_itemToBeMergedWith:(id)a0 fromItems:(id)a1 forEditing:(BOOL)a2;
- (BOOL)canAddEditingItem;
- (id)policyForItem:(id)a0;
- (BOOL)_arrayContainsMaxAllowedItems:(id)a0;
- (void)_updateNameValuesForItems:(id)a0;
- (void)saveChangesForItems:(id)a0;
- (id)labelsForItem:(id)a0 options:(unsigned long long)a1;
- (id)labelsInUseByGroup;
- (id)itemsUsingLabel:(id)a0;
- (id)_nextAvailableLabel;
- (id)_availableLabelsInLabels:(id)a0 forItem:(id)a1 withValueSelector:(SEL)a2 usedLabelsCount:(long long *)a3;
- (id)_nextAvailableLabelInLabels:(id)a0 withValueSelector:(SEL)a1;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableSocialService;
- (BOOL)isRequired;
- (void)saveChanges;

@end
