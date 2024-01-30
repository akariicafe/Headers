@class NSSet, NSMutableSet, HMHome;

@interface HFConditionItemProvider : HFItemProvider

@property (readonly, nonatomic) NSMutableSet *conditionItems;
@property (retain, nonatomic) NSSet *conditions;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)items;
- (id)reloadItems;
- (id)initWithConditions:(id)a0 home:(id)a1;

@end
