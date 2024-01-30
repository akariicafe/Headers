@class HFActionSetBuilder, NSSet, HREActionVarianceCollection, NSMutableSet, NSString;

@interface HREActionSetRecommendation : HRERecommendation <HREActionRecommendation>

@property (retain, nonatomic) NSMutableSet *mutableActionSetBuilders;
@property (retain, nonatomic) HFActionSetBuilder *selectedActionSetBuilder;
@property (readonly, nonatomic) NSSet *actionSetBuilders;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSSet *addedActions;
@property (retain, nonatomic) HREActionVarianceCollection *allowedVariance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAction:(id)a0;
- (id)descriptionBuilder;
- (void)addActions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeActions:(id)a0;
- (void).cxx_destruct;
- (void)removeAction:(id)a0;
- (void)addAction:(id)a0 allowEditingExistingActions:(BOOL)a1;
- (void)addActions:(id)a0 allowEditingExistingActions:(BOOL)a1;
- (BOOL)containsMeaningfulChanges;
- (id)existingActionBuilder:(id)a0 inSet:(id)a1;
- (id)involvedObjects;
- (id)changedInvolvedObjects;
- (BOOL)containsRecommendableContent;
- (BOOL)includesObjects:(id)a0;
- (id)initWithHome:(id)a0 uniqueIdentifier:(id)a1;

@end
