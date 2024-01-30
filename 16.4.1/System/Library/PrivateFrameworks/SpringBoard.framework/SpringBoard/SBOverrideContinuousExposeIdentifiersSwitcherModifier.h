@class NSArray;

@interface SBOverrideContinuousExposeIdentifiersSwitcherModifier : SBSwitcherModifier

@property (readonly, copy, nonatomic) NSArray *overrideContinuousExposeIdentifiersInSwitcher;
@property (readonly, copy, nonatomic) NSArray *overrideContinuousExposeIdentifiersInStrip;

- (id)continuousExposeIdentifiersInSwitcher;
- (id)continuousExposeIdentifiersInStrip;
- (void)didMoveToParentModifier:(id)a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (id)initWithContinuousExposeIdentifiersInSwitcher:(id)a0 continuousExposeIdentifiersInStrip:(id)a1;

@end
