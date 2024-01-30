@interface PUSectionedGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) BOOL invalidateForVerticalScroll;
@property (nonatomic) BOOL sectioningIsPreserved;
@property (nonatomic) BOOL samplingIsPreserved;
@property (nonatomic) BOOL invalidationHasBeenRedispatched;

- (id)description;

@end
