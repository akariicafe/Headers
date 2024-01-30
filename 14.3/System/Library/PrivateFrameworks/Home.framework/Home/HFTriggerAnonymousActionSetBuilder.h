@class HMTrigger, HFMutableSetDiff;

@interface HFTriggerAnonymousActionSetBuilder : HFAbstractBaseActionSetBuilder

@property (retain, nonatomic) HMTrigger *containingTrigger;
@property (nonatomic) unsigned long long actionSetType;
@property (readonly, nonatomic) HFMutableSetDiff *actionBuilders;

- (void).cxx_destruct;
- (void)addAction:(id)a0 actionSetType:(unsigned long long)a1;
- (void)updateActionBuildersDiff:(id)a0;
- (id)deleteActionSet;
- (id)commitItem;
- (BOOL)hasActions;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)updateAction:(id)a0;
- (id)getOrCreateActionSet;

@end
