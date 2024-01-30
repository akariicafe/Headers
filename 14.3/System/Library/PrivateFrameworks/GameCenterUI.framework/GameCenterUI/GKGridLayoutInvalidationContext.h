@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL invalidateIncrementalReveal;
@property (nonatomic) BOOL invalidateBoundsChange;
@property (nonatomic) BOOL invalidatePlaceholderVisibility;
@property (nonatomic) BOOL invalidatePinnableAreas;

@end
