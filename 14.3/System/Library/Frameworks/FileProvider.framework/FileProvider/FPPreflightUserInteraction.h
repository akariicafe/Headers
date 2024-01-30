@class NSString, NSArray, NSPredicate, FPPreflightUserInteractionAlert;

@interface FPPreflightUserInteraction : NSObject

@property (retain, nonatomic) FPPreflightUserInteractionAlert *alert;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSArray *subInteractions;
@property (retain, nonatomic) NSPredicate *predicate;

+ (id)interactionFromDictionary:(id)a0 localizationLookup:(id)a1 providerIdentifier:(id)a2;
+ (id)_retrieveFPItemHierarchyLookupForItem:(id)a0 itemsHierarchyCache:(id)a1 hierarchyServicer:(id)a2;
+ (void)_setupEvaluationObjectsByName:(id)a0 hierarchyServicer:(id)a1;
+ (id)evaluationObjectsForAction:(id)a0 sourceItems:(id)a1 destinationItem:(id)a2 hierarchyServicer:(id)a3;
+ (id)userInteractionErrorsInInfoPlistInteractions:(id)a0 evaluationObjectsByName:(id)a1 localizationLookup:(id)a2 providerIdentifier:(id)a3;
+ (id)userInteractionItemsForDestinationItem:(id)a0;
+ (id)userInteractionErrorsInInfoPlistDict:(id)a0 forAction:(id)a1 bundleID:(id)a2 hierarchyServicer:(id)a3 sourceNSFPItems:(id)a4 destinationNSFPItem:(id)a5 localizationLookup:(id)a6 provider:(id)a7 domain:(id)a8 extensionCapabilities:(unsigned long long)a9 useFPFS:(BOOL)a10;
+ (id)userInteractionErrorsForAction:(id)a0 sourceItems:(id)a1 destinationItem:(id)a2 hierarchyServicer:(id)a3;
+ (id)userInteractionErrorsInInfoPlistDict:(id)a0 forAction:(id)a1 bundleID:(id)a2 hierarchyServicer:(id)a3 sourceItems:(id)a4 destinationItem:(id)a5 localizationLookup:(id)a6;

- (id)_evaluateWithObjectsByName:(id)a0 sourceItems:(id)a1 sourceItemsLookups:(id)a2 errorIndex:(unsigned long long *)a3;
- (BOOL)_shouldSetupDestinationItemHierarchyLookup;
- (BOOL)_shouldSetupSourceItemHierarchyLookup;
- (id)evaluateWithObjectsByName:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
