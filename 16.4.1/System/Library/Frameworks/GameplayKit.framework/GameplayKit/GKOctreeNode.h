@interface GKOctreeNode : NSObject {
    void *_cOctreeNode;
}

@property (readonly) struct GKBox { } box;

- (void)setCOctreeNode:(void *)a0;
- (void *)cOctreeNode;

@end
