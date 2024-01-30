@interface PUOneUpTilingLayoutInvalidationContext : PUTilingLayoutInvalidationContext

@property (nonatomic, setter=_setInvalidatedContentInsets:) BOOL invalidatedContentInsets;
@property (nonatomic, setter=_setInvalidatedAccessoryTile:) BOOL invalidatedAccessoryTile;
@property (nonatomic, setter=_setInvalidatedContentOffset:) BOOL invalidatedContentOffset;
@property (nonatomic, setter=_setInvalidatedVideoPlaceholderTile:) BOOL invalidatedVideoPlaceholderTile;
@property (nonatomic, setter=_setOptions:) unsigned long long options;
@property (readonly, nonatomic) BOOL invalidatedCommentsTile;

@end
