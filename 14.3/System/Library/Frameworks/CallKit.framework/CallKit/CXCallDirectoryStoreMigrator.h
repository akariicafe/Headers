@class CXCallDirectoryStore;

@interface CXCallDirectoryStoreMigrator : NSObject

@property (retain, nonatomic) CXCallDirectoryStore *store;
@property (copy, nonatomic) id /* block */ storeCreationBlock;
@property (copy, nonatomic) id /* block */ retrieveExtensionBlock;

- (id)init;
- (void).cxx_destruct;
- (id)performMigrationsWithError:(id *)a0;
- (id)_performMigrationsStartingAtSchemaVersion:(long long)a0 error:(id *)a1;

@end
