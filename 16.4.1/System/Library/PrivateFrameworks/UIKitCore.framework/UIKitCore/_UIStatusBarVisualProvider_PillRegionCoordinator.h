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

- (id)animationForBackgroundActivityPill;
- (id)animationForBackgroundActivityIcon;
- (void)_hideActivityDetailAndUpdate:(BOOL)a0;
- (BOOL)handledUpdateOfActionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (void)updatePill;
- (void)updateRegion:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2 cornerRadius:(double)a3;
- (id)animationForBackgroundActivityPillWithDuration:(double)a0 scale:(double)a1;
- (void)_updateBackgroundActivityWithEntry:(id)a0 timeEntry:(id)a1 needsUpdate:(BOOL)a2;
- (void)updateDataForBackgroundActivity:(id)a0;
- (void).cxx_destruct;

@end
