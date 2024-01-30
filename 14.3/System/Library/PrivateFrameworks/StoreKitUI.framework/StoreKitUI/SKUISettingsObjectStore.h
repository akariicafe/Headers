@class NSMutableOrderedSet;

@interface SKUISettingsObjectStore : NSObject {
    NSMutableOrderedSet *_allObjects;
    BOOL _dirty;
    NSMutableOrderedSet *_visibleObjects;
}

- (id)init;
- (unsigned long long)numberOfObjects;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)enumerateObjects:(id /* block */)a0;
- (id)description;
- (unsigned long long)indexOfObject:(id)a0;
- (id)allObjects;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0 hidden:(BOOL)a1;
- (unsigned long long)numberOfVisibleObjects;
- (void)hideObject:(id)a0;
- (unsigned long long)indexOfVisibleObject:(id)a0;
- (BOOL)objectIsVisible:(id)a0;
- (void)revealObject:(id)a0;
- (id)visibleObjectAtIndex:(unsigned long long)a0;
- (void)_updateVisibleOrder;
- (void)enumerateVisibleObjects:(id /* block */)a0;

@end
