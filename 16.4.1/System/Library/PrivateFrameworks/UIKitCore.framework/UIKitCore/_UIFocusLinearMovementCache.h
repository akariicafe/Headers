@class NSArray, NSHashTable;

@interface _UIFocusLinearMovementCache : NSObject {
    double _lastUpdate;
    double _cooldownThreshold;
    NSArray *_linearItems;
    NSHashTable *_parentEnvironments;
    struct { unsigned char isInvalidated : 1; unsigned char invalidateOnTimeout : 1; } _flags;
}

- (void)_invalidate;
- (void).cxx_destruct;
- (void)_invalidateOnTimeout;
- (void)_updateParentEnvironmentIfNecessary;
- (void)environmentDidAppear:(id)a0;
- (void)environmentWillDisappear:(id)a0;
- (void)focusGroupPriorityDidChange:(id)a0;
- (id)initWithFocusBehavior:(id)a0;
- (void)invalidateFocusItemContainer:(id)a0;
- (id)nextItemForRequest:(id)a0;
- (void)scrollableContainerDidScroll:(id)a0;
- (void)updateCacheWithContext:(id)a0;

@end
