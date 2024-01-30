@class NSSet, NSMutableSet, HMHome;

@interface HFConditionItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *conditionItems;
@property (retain, nonatomic) NSSet *conditions;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;
- (id)initWithConditions:(id)a0 home:(id)a1;

@end
