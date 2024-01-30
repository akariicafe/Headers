@class NSString;

@interface TPSDiscoverabilitySignalsContextualPredicate : NSObject <TPSDuetContextualPredicateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextualPredicateForDeliveryDuetEvent:(id)a0;
+ (id)predicatesForUserInfoKeyPath:(id)a0 key:(id)a1 value:(id)a2;


@end
