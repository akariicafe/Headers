@class NSArray, NSHashTable;

@interface SBSwitcherDemoFilteringController : NSObject {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSArray *hiddenApplicationBundleIDs;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;

@end
