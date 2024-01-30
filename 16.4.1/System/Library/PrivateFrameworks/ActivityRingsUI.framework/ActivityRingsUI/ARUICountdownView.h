@class ARUIRingGroupController;

@interface ARUICountdownView : ARUIRingsView

@property (readonly, nonatomic) ARUIRingGroupController *countdownController;

+ (id)countdownViewConfiguredForWatch;
+ (id)countdownViewConfiguredForCompanion;
+ (id)countdownViewConfiguredForDisplayWithRingDiameter:(float)a0;

- (id)backingTrackRingGroup;
- (id)ringGroup;

@end
