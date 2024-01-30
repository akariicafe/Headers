@class NSString, CPLEngineScope, NSData, CPLEngineStore;

@interface CPLEngineScopedTask : CPLEngineSyncTask

@property (readonly, nonatomic) NSString *clientCacheIdentifier;
@property (readonly, nonatomic) CPLEngineScope *scope;
@property (readonly, nonatomic) NSData *transportScope;
@property (readonly, nonatomic) CPLEngineStore *store;

- (id)initWithEngineLibrary:(id)a0 session:(id)a1 clientCacheIdentifier:(id)a2 scope:(id)a3 transportScope:(id)a4;
- (BOOL)checkScopeIsValidInTransaction:(id)a0;
- (void).cxx_destruct;

@end
