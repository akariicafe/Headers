@class HMTrigger, HFMutableSetDiff;

@interface HFTriggerAnonymousActionSetBuilder : HFAbstractBaseActionSetBuilder

@property (retain, nonatomic) HMTrigger *containingTrigger;
@property (nonatomic) unsigned long long actionSetType;
@property (readonly, nonatomic) HFMutableSetDiff *actionBuilders;

- (BOOL)hasActions;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)shortcutsComponentActionSet;
- (id)deleteActionSet;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)updateAction:(id)a0;
- (void)addAction:(id)a0 actionSetType:(unsigned long long)a1;
- (id)createActionSetBuilder;
- (id)getOrCreateActionSet;
- (void)updateActionBuildersDiff:(id)a0;
- (BOOL)useActionSetBuilder;

@end
