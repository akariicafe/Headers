@class NSTimer, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;

@interface _UIStatusBarVisualProvider_Phone : _UIStatusBarVisualProvider_iOS

@property (retain, nonatomic) NSTimer *backgroundActivityDetailTimer;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement;
@property (retain, nonatomic) _UIStatusBarRegion *pillRegion;

+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (void)updateDataForBackgroundActivity:(id)a0;
- (void).cxx_destruct;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (id)willUpdateWithData:(id)a0;
- (id)_animationForBackgroundActivityPill;
- (id)_animationForBackgroundActivityIcon;
- (void)_hideActivityDetailAndUpdate:(BOOL)a0;
- (void)_updateBackgroundActivityWithEntry:(id)a0 timeEntry:(id)a1 needsUpdate:(BOOL)a2;
- (id)animationForBackgroundActivityPillWithDuration:(double)a0 scale:(double)a1;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (void)updatePill;

@end
