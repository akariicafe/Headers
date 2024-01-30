@interface PUTilingScrollInfo : NSObject

@property (nonatomic, setter=_setScrollDirections:) long long scrollDirections;
@property (nonatomic, setter=_setShouldEnablePaging:) BOOL shouldEnablePaging;
@property (nonatomic, setter=_setInterpageSpacing:) struct CGSize { double width; double height; } interpageSpacing;
@property (nonatomic, setter=_setPagingSpringPullAdjustment:) double pagingSpringPullAdjustment;
@property (nonatomic, setter=_setPagingFrictionAdjustment:) double pagingFrictionAdjustment;

+ (id)scrollInfoWithScrollDirections:(long long)a0;
+ (id)scrollInfoWithScrollDirections:(long long)a0 enabledPagingWithInterpageSpacing:(struct CGSize { double x0; double x1; })a1;
+ (id)scrollInfoWithScrollDirections:(long long)a0 enabledPagingWithInterpageSpacing:(struct CGSize { double x0; double x1; })a1 pagingSpringPullAdjustment:(double)a2 pagingFrictionAdjustment:(double)a3;

@end
