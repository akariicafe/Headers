@class NSTimer, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;
@protocol _UIStatusBarPillRegionVisualProvider;

@interface _UIStatusBarVisualProvider_PillRegionCoordinator : NSObject {
    BOOL _visualProviderImplementsBackgroundActivityPillAnimation;
}

@property (retain, nonatomic) NSTimer *backgroundActivityDetailTimer;
@property (weak, nonatomic) id<_UIStatusBarPillRegionVisualProvider> visualProvider;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement;
@property (retain, nonatomic) _UIStatusBarRegion *pillRegion;

- (void)updateDataForBackgroundActivity:(id)a0;
- (id)animationForBackgroundActivityPillWithDuration:(double)a0 scale:(double)a1;
- (BOOL)handledUpdateOfActionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (void)updateRegion:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2 cornerRadius:(double)a3;
- (void)updatePill;
- (id)animationForBackgroundActivityIcon;
- (id)animationForBackgroundActivityPill;
- (void)_updateBackgroundActivityWithEntry:(id)a0 timeEntry:(id)a1 needsUpdate:(BOOL)a2;
- (void)_hideActivityDetailAndUpdate:(BOOL)a0;
- (void).cxx_destruct;

@end
