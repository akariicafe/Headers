@class HFImageIconDescriptor, NSString, NSSet, UIColor;

@interface HFActionSetBuilder : HFAbstractBaseActionSetBuilder <HFComparable, HFAccessoryLikeObjectContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *hf_accessoryLikeObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActionSetDeleted;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL showInHomeDashboard;
@property (retain, nonatomic) HFImageIconDescriptor *iconDescriptor;
@property (retain, nonatomic) UIColor *iconTintColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)performValidation;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)deleteActionSet;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)updateFromActionSetBuilder:(id)a0;
- (id)_builderCommitItem;
- (id)_deleteActionSet:(id)a0 fromHome:(id)a1;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateIncludedContext;
- (id)_lazy_performValidation;
- (id)_legacyCommitItemWithOperationType:(id)a0;
- (id)_updateIconOnBuilder:(id)a0;
- (id)_updateValueForContextType:(unsigned long long)a0;
- (void)_updateValueForContextType:(unsigned long long)a0 onActionSetBuilder:(id)a1;
- (id)compareToObject:(id)a0;
- (id)createActionSetBuilder;
- (id)getOrCreateActionSetBuilder;
- (void)notifyObserversForCreatedActionSet:(id)a0;
- (void)notifyObserversForRenamedActionSet:(id)a0;
- (id)transformedError:(id)a0 withOperationType:(id)a1;
- (id)updateActionSetBuilder:(id)a0;

@end
