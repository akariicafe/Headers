@class NSSet;

@interface WFBundledActionProvider : WFActionProvider

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;

- (id)currentVersion;
- (id)cacheURL;
- (void)deleteCache;
- (id)cacheDirectoryURL;
- (void)updateCache:(id /* block */)a0;
- (void)createActionsForRequests:(id)a0;
- (id)actionDefinitionsWithIdentifiers:(id)a0;
- (id)availableActionIdentifiers;
- (id)bundledURL;
- (id)createActionWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 fallbackToMissing:(BOOL)a3 isForLocalization:(BOOL)a4;
- (id)createAllAvailableActions;
- (id)createAllAvailableActionsForLocalization;
- (id)createAllAvailableActionsIncludingMissingActions:(BOOL)a0;

@end
