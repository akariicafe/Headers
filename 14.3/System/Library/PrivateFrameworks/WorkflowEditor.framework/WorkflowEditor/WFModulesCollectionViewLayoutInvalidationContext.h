@interface WFModulesCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL invalidateDelegateHidden;
@property (nonatomic) BOOL invalidateDelegateMetrics;
@property (nonatomic) BOOL invalidateDelegateOffsetsAndConnections;

- (id)init;

@end
