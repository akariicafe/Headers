@class _DKKnowledgeStore;

@interface SGAppLaunchHistory : NSObject {
    _DKKnowledgeStore *_knowledgeStore;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)launchCountForBundleId:(id)a0 afterDate:(id)a1 limit:(unsigned long long)a2;

@end
