@class NSSet;

@interface WFBundledActionProvider : WFActionProvider

@property (readonly, nonatomic) NSSet *identifiersOfActionsDisabledOnWatch;

- (id)cacheURL;
- (id)currentVersion;
- (id)cacheDirectoryURL;
- (void)updateCache:(id /* block */)a0;
- (id)actionDefinitionsWithIdentifiers:(id)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0;
- (void)deleteCache;
- (id)bundledURL;
- (id)createAllAvailableActions;

@end
