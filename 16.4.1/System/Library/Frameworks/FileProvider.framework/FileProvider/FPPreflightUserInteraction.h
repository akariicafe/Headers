@class NSString, NSArray, NSPredicate, FPPreflightUserInteractionAlert;

@interface FPPreflightUserInteraction : NSObject

@property (retain, nonatomic) FPPreflightUserInteractionAlert *alert;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSString *domainIdentifier;
@property (retain, nonatomic) NSArray *subInteractions;
@property (nonatomic) BOOL hasSuppressionIdentifier;
@property (nonatomic) NSString *helpURL;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSString *userInteractionIdentifier;

+ (id)evaluationObjectsForAction:(id)a0 sourceItems:(id)a1 destinationItem:(id)a2 domainUserInfo:(id)a3 sourceItemKeysAllowList:(id)a4 destinationItemKeysAllowList:(id)a5;
+ (id)gatherErrorsForInteractions:(id)a0 evaluationObjects:(id)a1 suppressionDelegate:(id)a2;
+ (id)interactionFromDictionary:(id)a0 localizationLookup:(id)a1 providerIdentifier:(id)a2 domainIdentifier:(id)a3;
+ (id)interactionsForArray:(id)a0 localizationLookup:(id)a1 providerIdentifier:(id)a2 domainIdentifier:(id)a3;
+ (id)interactionsForBundle:(id)a0 providerIdentifier:(id)a1 domainIdentifier:(id)a2;
+ (id)interactionsForProviderItem:(id)a0 error:(id *)a1;
+ (void)propagateConfigurationKeysDownInteractionTreeWithObject:(id)a0 key:(id)a1 value:(id)a2;
+ (id)userInteractionErrorsInInfoPlistDict:(id)a0 forAction:(id)a1 bundleID:(id)a2 hierarchyServicer:(id)a3 sourceNSFPItems:(id)a4 destinationNSFPItem:(id)a5 localizationLookup:(id)a6 provider:(id)a7 domain:(id)a8 extensionCapabilities:(unsigned long long)a9 useFPFS:(BOOL)a10;

- (id)description;
- (void).cxx_destruct;
- (id)_evaluateWithObjectsByName:(id)a0 sourceItems:(id)a1 suppressionDelegate:(id)a2 errorIndex:(unsigned long long *)a3;
- (id)evaluateWithObjectsByName:(id)a0 suppressionDelegate:(id)a1;

@end
