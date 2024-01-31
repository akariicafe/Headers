@class LNAppContext, NSMapTable, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LNClientConnection : NSObject <LNConnectionHostInterface, LNPerformActionOperationDelegate>

@property (readonly, nonatomic) NSMapTable *performActionOperations;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) LNAppContext *appContext;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { unsigned int x0[8]; } *)currentAuditToken;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fetchActionAppContextFromAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionForAppShortcutIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionForAutoShortcutPhrase:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionOutputValueWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAppShortcutParametersWithCompletionHandler:(id /* block */)a0;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDisplayRepresentationForActions:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchMetadataWithCompletionHandler:(id /* block */)a0;
- (void)fetchOptionsDefaultValuesForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOptionsForAction:(id)a0 actionMetadata:(id)a1 parameterMetadata:(id)a2 optionsProviderReference:(id)a3 searchTerm:(id)a4 localeIdentifier:(id)a5 completionHandler:(id /* block */)a6;
- (void)fetchParameterOptionDefaultValueForAction:(id)a0 actionMetadata:(id)a1 parameterIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchStateForAppIntentIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)a0 forEntityIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)a0 suggestionContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchViewActionsWithCompletionHandler:(id /* block */)a0;
- (void)fetchViewEntitiesWithInteractionIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)getListenerEndpointWithCompletionHandler:(id /* block */)a0;
- (id)initWithConnection:(id)a0 queue:(id)a1 appContext:(id)a2;
- (void)performAction:(id)a0 options:(id)a1 executor:(id)a2 completionHandler:(id /* block */)a3;
- (void)performAllEntitiesQueryWithEntityMangledTypeName:(id)a0 completionHandler:(id /* block */)a1;
- (void)performPropertyQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedResultsQueryWithEntityType:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAppShortcutParametersWithCompletionHandler:(id /* block */)a0;
- (void)enqueuePerformActionOperation:(id)a0;
- (void)performActionOperation:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)removePerformActionOperation:(id)a0;

@end
