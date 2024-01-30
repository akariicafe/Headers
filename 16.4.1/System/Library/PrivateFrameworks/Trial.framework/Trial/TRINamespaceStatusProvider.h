@protocol TRIPaths;

@interface TRINamespaceStatusProvider : NSObject {
    id<TRIPaths> _paths;
}

- (id)initWithPaths:(id)a0;
- (BOOL)saveStatus:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteStatusForNamespaceWithName:(id)a0;
- (id)loadNamespaceStatusFromURL:(id)a0;
- (BOOL)saveNamespaceStatus:(id)a0 toURL:(id)a1;
- (id)statusForNamespaceWithName:(id)a0;
- (BOOL)updateStatusForNamespaceWithName:(id)a0 usingBlock:(id /* block */)a1;
- (id)urlForStatusWithNamespaceName:(id)a0;

@end
