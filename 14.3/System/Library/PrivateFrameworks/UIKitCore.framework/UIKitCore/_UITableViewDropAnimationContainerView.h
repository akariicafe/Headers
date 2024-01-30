@class NSArray;

@interface _UITableViewDropAnimationContainerView : _UITableViewContainerView

@property (nonatomic) long long activeDropAnimationCount;
@property (nonatomic) double originalTargetCenterY;
@property (readonly, nonatomic) NSArray *cells;
@property (readonly, nonatomic) BOOL hasCompletedAllDropAnimations;
@property (nonatomic) struct CGPoint { double x; double y; } _tableViewContainerOffsetFromTargetCenter;

- (void)endDropAnimation;
- (id)init;
- (void)updateOffsetFromTargetCenterIfNeeded;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)beginDropAnimation;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
