@class RBPersonaManager;

@interface RBContainerManager : NSObject <RBContainerManaging> {
    struct container_query_s { } *_queryForApps;
    struct container_query_s { } *_queryForPlugins;
    struct OptionalUID { BOOL set; unsigned int uid; } _queryUID;
    RBPersonaManager *_personaManager;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_clearCache;
- (void)_fetchCache:(id)a0;
- (struct OptionalUID { BOOL x0; unsigned int x1; })_fetchCacheUIDChoice:(id)a0;
- (id)_lookupContainerPathForIdentity:(id)a0 context:(id)a1 persona:(id)a2 containerIdentifier:(id)a3 retry:(BOOL)a4 error:(id *)a5;
- (void)_probeCache:(const void *)a0 withContainerIdentifier:(id)a1 persona:(id)a2 completionHandler:(id /* block */)a3;
- (void)_probeCacheSubqueryIterationEvaluate:(struct container_object_s { } *)a0 withAccummulatedState:(struct ProbeCacheSubqueryIterationAccumulatedState { id x0; id x1; unsigned long long x2; } *)a1;
- (id)_retryLookupAfterCacheMissForIdentity:(id)a0 context:(id)a1 persona:(id)a2 containerIdentifier:(id)a3;
- (id)containerPathForIdentity:(id)a0 context:(id)a1 persona:(id)a2 error:(id *)a3;
- (id)initWithPersonaManager:(id)a0;

@end
