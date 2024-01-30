@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    struct { unsigned char invalidateDelegateMetrics : 1; unsigned char invalidateAttributes : 1; } _flowLayoutInvalidationFlags;
}

@property (nonatomic) BOOL invalidateFlowLayoutDelegateMetrics;
@property (nonatomic) BOOL invalidateFlowLayoutAttributes;

- (id)init;

@end
