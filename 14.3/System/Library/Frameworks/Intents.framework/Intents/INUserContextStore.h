@class CKKnowledgeStore;

@interface INUserContextStore : NSObject {
    CKKnowledgeStore *_knowledgeStore;
}

+ (id)findDataInValue:(id)a0;
+ (id)keyPrefixForType:(long long)a0;
+ (id)keyForBundleIdentifier:(id)a0 andType:(long long)a1;
+ (id)sharedStore;

- (id)_initWithKnowledgeStore:(id)a0;
- (void)removeUserContextOfClass:(Class)a0 forBundleIdentifier:(id)a1;
- (void)storeUserContextViaHelper:(id)a0 forBundleIdentifier:(id)a1;
- (void)userContextOfClass:(Class)a0 forBundleIdentifiers:(id)a1 withCompletion:(id /* block */)a2;
- (void)userContextOfClass:(Class)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)storeUserContext:(id)a0 forBundleIdentifier:(id)a1;
- (id)_init;

@end
