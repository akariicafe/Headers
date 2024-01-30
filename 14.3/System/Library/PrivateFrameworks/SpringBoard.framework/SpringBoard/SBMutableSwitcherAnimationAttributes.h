@class SBFFluidBehaviorSettings;

@interface SBMutableSwitcherAnimationAttributes : SBSwitcherAnimationAttributes

@property (nonatomic) long long updateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *layoutSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *positionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *opacitySettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cornerRadiusSettings;

@end
