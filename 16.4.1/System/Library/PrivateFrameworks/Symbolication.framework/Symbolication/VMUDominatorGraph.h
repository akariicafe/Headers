@class NSData, VMUGraphEnumerator;

@interface VMUDominatorGraph : NSObject {
    VMUGraphEnumerator *_reverseGraphEnumerator;
}

@property (nonatomic) unsigned int nodeNamespaceSize;
@property (nonatomic) unsigned int *dominators;
@property (nonatomic) unsigned int *firstDominates;
@property (nonatomic) unsigned int *nextDominates;
@property (retain, nonatomic) NSData *dominators_data;
@property (retain, nonatomic) NSData *firstDominates_data;
@property (retain, nonatomic) NSData *nextDominates_data;

+ (id)callTreeWithGraph:(id)a0 groupByType:(BOOL)a1 showRegionVirtualSize:(BOOL)a2 desiredAddress:(id)a3 debugTimer:(id)a4;
+ (id)callTreeWithGraph:(id)a0 groupByType:(BOOL)a1 showRegionVirtualSize:(BOOL)a2 desiredClassesPattern:(id)a3 debugTimer:(id)a4;
+ (id)consolidate:(id)a0;

- (id)export:(id)a0;
- (id)initWithDict:(id)a0;
- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)_computeDominators:(id)a0 roots:(void *)a1 reversePostOrder:(unsigned int *)a2 debugTimer:(id)a3;
- (void)_computeDominees:(id)a0;
- (id)copyDict;
- (unsigned int)dominator:(unsigned int)a0;
- (void)enumerateDirectDomineesForNodeName:(unsigned int)a0 withBlock:(id /* block */)a1;
- (void)enumerateDominatorRootsWithBlock:(id /* block */)a0;
- (void)enumerateDomineesForNodeName:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)fastDFS:(id /* block */)a0 graph:(id)a1;
- (BOOL)hasAnyDirectDomineesForNodeName:(unsigned int)a0;
- (id)initWithGraph:(id)a0 debugTimer:(id)a1;
- (id)iterDirectDomineesForNodeName:(unsigned int)a0;
- (id)iterDominatorRoots;

@end
