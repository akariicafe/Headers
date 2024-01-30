@class NSString, NSUUID, NSArray, NSError;
@protocol LNPerformActionExecutorDelegate;

@interface LNAppContext : NSObject

+ (struct { unsigned int x0[8]; } *)currentAuditToken;

- (id)init;
- (void).cxx_destruct;
- (void)fetchActionAppContextForAction:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchActionForAutoShortcutPhrase:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchActionOutputValueWithIdentifier:(NSUUID *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchDestinationMDMAccountIdentifierForAction:(id)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (void)fetchDisplayRepresentationForActions:(NSArray *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchMetadataWithCompletionHandler:(id /* block */)a0;
- (void)fetchOptionsDefaultValuesForAction:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)fetchOptionsForActionMetadata:(id)a0 parameterMetadata:(id)a1 searchTerm:(id)a2 localeIdentifier:(id)a3 completionHandler:(void (^)(id, NSError *))a4;
- (void)fetchParameterOptionDefaultValueForActionMetadata:(id)a0 parameterIdentifier:(NSString *)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)fetchStructuredDataWithTypeIdentifier:(long long)a0 forEntityIdentifiers:(id)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)fetchSuggestedActionsForStartWorkoutAction:(id)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchSuggestedActionsWithSiriLanguageCode:(NSString *)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)fetchSuggestedFocusActionsForActionMetadata:(id)a0 suggestionContext:(id)a1 completionHandler:(void (^)(NSArray *, NSError *))a2;
- (void)fetchViewActionsWithCompletionHandler:(void (^)(id, NSError *))a0;
- (void)fetchViewEntitiesWithInteractionIDs:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)performPropertyQuery:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(NSString *)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)performSuggestedResultsQueryWithEntityType:(id)a0 completionHandler:(void (^)(id, NSError *))a1;
- (void)cancelAllPerformActionOperations;
- (void)performAction:(id)a0 options:(id)a1 delegate:(id<LNPerformActionExecutorDelegate>)a2 auditToken:(struct { unsigned int x0[8]; })a3 completionHandler:(void (^)(id, NSError *))a4;
- (void)removeAllDeferredOutputs;

@end
