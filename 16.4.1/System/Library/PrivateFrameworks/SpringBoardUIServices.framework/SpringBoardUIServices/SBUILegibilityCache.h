@class NSMutableDictionary, NSMapTable, NSHashTable;
@protocol SBUILegibilityEngine;

@interface SBUILegibilityCache : NSObject {
    NSMapTable *_templateImagesBySizeForSettings;
    NSMapTable *_sortedTemplateImageKeysBySizeForSettings;
    NSMapTable *_strengthForImageLookupMap;
    NSHashTable *_cachedTemplatedImages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSMutableDictionary *_memoryPoolLock_memoryPoolsBySlotSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _memoryPoolLock;
}

@property (readonly, weak, nonatomic) id<SBUILegibilityEngine> engine;

- (BOOL)isCachedTemplateImage:(id)a0;
- (id)cachedStrengthForImage:(id)a0 strength:(double)a1 generator:(id /* block */)a2;
- (void)removeAllObjects;
- (id)initWithEngine:(id)a0;
- (BOOL)containsTemplateForSettings:(id)a0;
- (id)memoryPoolForGraphicsContextType:(long long)a0 matchingSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)_teardownMemoryPools;
- (id)templateImageForSettings:(id)a0 matchingSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)cacheTemplateShadowImage:(id)a0 settings:(id)a1 maxSize:(struct CGSize { double x0; double x1; })a2;

@end
