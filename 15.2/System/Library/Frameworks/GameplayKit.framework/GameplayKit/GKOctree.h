@interface GKOctree : NSObject {
    void *_cOctree;
}

+ (id)octreeWithBoundingBox:(struct GKBox { })a0 minimumCellSize:(float)a1;

- (id)init;
- (BOOL)removeElement:(id)a0;
- (void)dealloc;
- (id)addElement:(SEL)a0 withPoint:(id)a1;
- (id)elementsAtPoint:(SEL)a0;
- (BOOL)removeElement:(id)a0 withNode:(id)a1;
- (id)initWithBoundingBox:(struct GKBox { })a0 minimumCellSize:(float)a1;
- (id)addElement:(id)a0 withBox:(struct GKBox { })a1;
- (id)elementsInBox:(struct GKBox { })a0;

@end
