@class LNAppContext, NSMapTable, NSXPCConnection, NSString;

@interface LNClientConnection : NSObject <LNConnectionHostInterface, LNPerformActionOperationDelegate>

@property (readonly, nonatomic) NSMapTable *performActionOperations;
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
- (void)fetchActionForAutoShortcutPhrase:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchActionOutputValueWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDisplayRepresentationForActions:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchMetadataWithCompletionHandler:(id /* block */)a0;
- (void)fetchOptionsDefaultValuesForAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOptionsForActionMetadata:(id)a0 parameterMetadata:(id)a1 searchTerm:(id)a2 localeIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchParameterOptionDefaultValueForActionMetadata:(id)a0 parameterIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)a0 forEntityIdentifiers:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)a0 suggestionContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchViewActionsWithCompletionHandler:(id /* block */)a0;
- (void)fetchViewEntitiesWithInteractionIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)getListenerEndpointWithCompletionHandler:(id /* block */)a0;
- (void)performAction:(id)a0 options:(id)a1 executor:(id)a2 completionHandler:(id /* block */)a3;
- (void)performPropertyQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSuggestedResultsQueryWithEntityType:(id)a0 completionHandler:(id /* block */)a1;
- (void)enqueuePerformActionOperation:(id)a0;
- (id)initWithConnection:(id)a0 appContext:(id)a1;
- (void)performActionOperation:(id)a0 didFinishWithResult:(id)a1 error:(id)a2;
- (void)removePerformActionOperation:(id)a0;

@end
