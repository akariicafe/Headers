@class NSArray;

@interface AXCyclingView : UIView

@property (nonatomic) unsigned long long cycleIndex;
@property (nonatomic) BOOL isMakingNextViewVisible;
@property (nonatomic) BOOL shouldSkipMakingNextViewVisible;
@property (readonly, nonatomic) NSArray *viewsInCycle;

- (void)didMoveToWindow;
- (void)endCycling;
- (void)beginCycling;
- (void)_updateForCycleIndex;
- (void)_makeNextViewVisible;

@end
