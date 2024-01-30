@class NSSet;

@interface WFBundledActionProvider : WFActionProvider

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;

- (id)currentVersion;
- (id)cacheURL;
- (id)cacheDirectoryURL;
- (void)deleteCache;
- (void)updateCache:(id /* block */)a0;
- (id)actionDefinitionsWithIdentifiers:(id)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0;
- (id)bundledURL;
- (id)createAllAvailableActions;
- (id)createActionWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 fallbackToMissing:(BOOL)a3 isForLocalization:(BOOL)a4;
- (id)createAllAvailableActionsIncludingMissingActions:(BOOL)a0;
- (id)createAllAvailableActionsForLocalization;

@end
