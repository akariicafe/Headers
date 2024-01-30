@class NSArray, NSHashTable;

@interface SBSwitcherDemoFilteringController : NSObject {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSArray *hiddenApplicationBundleIDs;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
