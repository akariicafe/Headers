@interface FCTagSubscriptionOrderAssigner : NSObject

@property (readonly, nonatomic) long long initialOrder;
@property (readonly, nonatomic) long long orderSpacing;

- (id)init;
- (id)_assignOrderToSubscriptions:(id)a0 inOpenStartRangeWithNextValue:(long long)a1;
- (id)_assignOrderToSubscriptions:(id)a0 inOpenEndRangeWithPreviousValue:(long long)a1;
- (id)_assignOrderToSubscriptionsInOpenRange:(id)a0;
- (id)_assignOrderToSubscriptions:(id)a0 withInitialOrder:(long long)a1 orderSpacing:(long long)a2;
- (id)_assignOrderToSubscriptions:(id)a0 inClosedRangeWithPreviousValue:(long long)a1 nextValue:(long long)a2;
- (id)assignOrderToTagSubscriptions:(id)a0;
- (id)initWithInitialOrder:(long long)a0 orderSpacing:(long long)a1;

@end
