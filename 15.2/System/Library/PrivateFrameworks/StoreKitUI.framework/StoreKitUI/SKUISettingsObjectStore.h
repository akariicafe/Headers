@class NSMutableOrderedSet;

@interface SKUISettingsObjectStore : NSObject {
    NSMutableOrderedSet *_allObjects;
    BOOL _dirty;
    NSMutableOrderedSet *_visibleObjects;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)numberOfObjects;
- (id)allObjects;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateObjects:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
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
