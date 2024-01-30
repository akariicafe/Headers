@interface GKQuadtreeNode : NSObject {
    void *_cQuadTreeNode;
}

@property (readonly, nonatomic) struct GKQuad { void /* unknown type, empty encoding */ quadMin; void /* unknown type, empty encoding */ quadMax; } quad;

- (void /* unknown type, empty encoding */)min;
- (void /* unknown type, empty encoding */)max;
- (void *)cQuadTreeNode;
- (void)setCQuadTreeNode:(void *)a0;

@end
