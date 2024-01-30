@class VSAppInstallationInfoCenter;

@interface VSSubscriptionPredicateFactory : NSObject

@property (retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter;

+ (id)_subscriptionSourcePredicateTemplateValues;
+ (id)_subscriptionSourceKindPredicateTemplateValues;
+ (id)_subscriptionPredicateTemplateValues;

- (void).cxx_destruct;
- (id)_predicateTemplateForSourceKind:(long long)a0;
- (id)_predicateTemplateForSourceIdentifier:(id)a0;
- (id)_topLevelAccessPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)_predicateTemplateForSourceOfTask:(id)a0;
- (id)_predicateTemplateForAppPredicate:(id)a0 withTask:(id)a1;
- (id)_predicateTemplateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)a0 toAttributeKeysInEntity:(id)a1;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)a0 toAttributeKeysInEntity:(id)a1;
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)a0 fromTask:(id)a1;
- (id)allowedSubscriptionsPredicateForTask:(id)a0;
- (id)subscriptionFetchPredicateForTask:(id)a0 withOptions:(id)a1;

@end
