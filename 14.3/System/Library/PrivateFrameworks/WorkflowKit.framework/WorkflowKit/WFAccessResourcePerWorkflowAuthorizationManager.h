@interface WFAccessResourcePerWorkflowAuthorizationManager : NSObject

+ (void)setAccessResourcesToAuthorizedIfNotDeterminedInActions:(id)a0 existingActions:(id)a1 forReference:(id)a2 inDatabase:(id)a3;
+ (void)setAccessResourcesToAuthorizedIfNotDeterminedInWorkflow:(id)a0 forReference:(id)a1 inDatabase:(id)a2;
+ (void)setStatusForAllAccessResourcesTo:(long long)a0 inWorkflow:(id)a1 forReference:(id)a2 inDatabase:(id)a3;
+ (void)setAccessResourcesToAuthorizedIfNotDetermined:(id)a0 otherActions:(id)a1;
+ (void)setNotDeterminedAccessResourcesAuthorizedInAction:(id)a0 forReference:(id)a1 inDatabase:(id)a2 existingAccessResources:(id)a3;

@end
