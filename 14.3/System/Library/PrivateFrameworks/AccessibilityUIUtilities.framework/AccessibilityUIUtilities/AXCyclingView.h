@class NSArray;

@interface AXCyclingView : UIView

@property (nonatomic) unsigned long long cycleIndex;
@property (nonatomic) BOOL isMakingNextViewVisible;
@property (nonatomic) BOOL shouldSkipMakingNextViewVisible;
@property (readonly, nonatomic) NSArray *viewsInCycle;

- (void)endCycling;
- (void)beginCycling;
- (void)didMoveToWindow;
- (void)_updateForCycleIndex;
- (void)_makeNextViewVisible;

@end
