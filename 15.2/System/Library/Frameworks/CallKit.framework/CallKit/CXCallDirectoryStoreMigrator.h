@class CXCallDirectoryStore;

@interface CXCallDirectoryStoreMigrator : NSObject

@property (retain, nonatomic) CXCallDirectoryStore *store;
@property (copy, nonatomic) id /* block */ storeCreationBlock;
@property (copy, nonatomic) id /* block */ retrieveExtensionBlock;

- (id)_performMigrationsStartingAtSchemaVersion:(long long)a0 error:(id *)a1;
- (id)performMigrationsWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;

@end
