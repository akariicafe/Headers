@interface SBMutableSwitcherScrollViewAttributes : SBSwitcherScrollViewAttributes

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) double decelerationRate;
@property (nonatomic) BOOL scrollViewPagingEnabled;
@property (nonatomic) struct CGSize { double x0; double x1; } interpageSpacingForPaging;
@property (nonatomic) struct CGPoint { double x0; double x1; } pagingOrigin;
@property (nonatomic) BOOL interpolatesDuringSwipeToKill;

@end
