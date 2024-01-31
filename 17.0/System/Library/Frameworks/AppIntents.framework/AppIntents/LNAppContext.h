@class NSString, NSArray, NSUUID, NSError, NSXPCConnection, NSProgress;
@protocol LNPerformActionExecutorDelegate;

@interface LNAppContext : NSObject

+ (struct { unsigned int x0[8]; } *)currentAuditToken;

- (id)init;
- (void).cxx_destruct;
- (void)fetchActionAppContextForAction:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchActionForAppShortcutIdentifier:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchActionForAutoShortcutPhrase:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchAppShortcutParametersWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (void)fetchDisplayRepresentationForActions:(NSArray *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchMetadataWithCompletionHandler:(id /* block */)a0;
- (void)fetchOptionsDefaultValuesForAction:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchOptionsForAction:(id)a0 actionMetadata:(id)a1 parameterMetadata:(id)a2 optionsProviderReference:(id)a3 searchTerm:(id)a4 localeIdentifier:(id)a5 completionHandler:(void (^)(id, NSError *))a6;
- (void)fetchParameterOptionDefaultValueForAction:(id)a0 actionMetadata:(id)a1 parameterIdentifier:(NSString *)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)fetchStateForAppIntentIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)a0 forEntityIdentifiers:(id)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)a0 suggestionContext:(id)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;
- (void)fetchViewActionsWithCompletionHandler:(void (^)(id, NSError *))a0;
- (void)fetchViewEntitiesWithInteractionIDs:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)performAllEntitiesQueryWithEntityMangledTypeName:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)performPropertyQuery:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)performSuggestedResultsQueryWithEntityType:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)updateAppShortcutParametersWithCompletionHandler:(void (^)(NSError *))a0;
- (void)fetchActionOutputValueForConnection:(NSXPCConnection *)a0 withIdentifier:(NSUUID *)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)performAction:(id)a0 options:(id)a1 reportingProgress:(NSProgress *)a2 delegate:(id<LNPerformActionExecutorDelegate>)a3 auditToken:(struct { unsigned int x0[8]; })a4 completionHandler:(void (^)(id, NSError *))a5;
- (void)removeAllDeferredOutputsFor:(id)a0;

@end
