@class NSSet, NSArray, NSDictionary, NSMapTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WFActionRegistry : NSObject <WFActionProviderDelegate>

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheUpdateAndFillQueue;
@property (readonly, nonatomic) NSArray *actionProvidersForFilling;
@property (readonly, nonatomic) NSArray *actionProvidersForLoading;
@property (readonly, nonatomic) NSDictionary *actionsByIdentifier;
@property (readonly, nonatomic) NSMapTable *actionsByActionProvider;
@property (readonly, nonatomic) NSDictionary *actionsByCategory;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSSet *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRegistry;
+ (id)supportedContentItemClassesForContentSelection;

- (id)init;
- (void).cxx_destruct;
- (void)fill;
- (id)createActionWithShortcut:(id)a0 error:(id *)a1;
- (void)actionProviderDidChange:(id)a0 updatedActions:(id)a1 removedActions:(id)a2 addedActions:(id)a3;
- (id)actionsBySpecializingActions:(id)a0 forHomes:(id)a1;
- (void)actionsBySpecializingActions:(id)a0 forHomes:(id)a1 completionBlock:(id /* block */)a2;
- (id)actionsForAppWithIdentifier:(id)a0;
- (id)actionsForCategory:(id)a0;
- (void)addActions:(id)a0 fromActionProvider:(id)a1;
- (id)createActionForSelectingContentOfType:(Class)a0 serializedParameters:(id)a1;
- (id)createActionWithDonation:(id)a0;
- (id)createActionWithIdentifier:(id)a0 serializedParameters:(id)a1;
- (id)createActionsForSelectingContentOfTypes:(id)a0 serializedParameterArray:(id)a1;
- (id)createActionsWithIdentifiers:(id)a0 serializedParameterArray:(id)a1;
- (id)defaultSerializedParametersForActionSelectingContentOfType:(Class)a0;
- (void)fillActionProviders:(id)a0;
- (void)removeActionsWithIdentifiers:(id)a0 fromActionProvider:(id)a1;
- (id)replacementActionForActionIdentifier:(id)a0 serializedParameters:(id)a1;
- (id)replacementActionForDonatedIntent:(id)a0;
- (id)residentBasedActionsForHome:(id)a0 residentCompatible:(BOOL)a1;
- (id)residentCompatibleActionsForCategory:(id)a0 home:(id)a1;
- (id)residentCompatibleActionsForHome:(id)a0;
- (id)residentCompatibleActionsFromActions:(id)a0 inHome:(id)a1;
- (void)setActions:(id)a0 forProvider:(id)a1;
- (id)suggestionsForHome:(id)a0 includingRelatedActions:(BOOL)a1;
- (void)updateCacheWithCompletion:(id /* block */)a0;
- (void)updateCachesAndFill;
- (id)updatedActionForResidentCompatibility:(id)a0 inHome:(id)a1;

@end
