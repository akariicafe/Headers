@class NSHashTable;

@interface SBFAlwaysOnLiveRenderingAssertionWeakCollection : NSObject {
    NSHashTable *_assertions;
}

- (BOOL)isEmpty;
- (void)removeAssertion:(id)a0;
- (long long)count;
- (void)removeAll;
- (id)init;
- (void)addAssertion:(id)a0;
- (void).cxx_destruct;
- (void)invalidateAll;
- (id)mostRecentlyCreatedValidAssertion;

@end
