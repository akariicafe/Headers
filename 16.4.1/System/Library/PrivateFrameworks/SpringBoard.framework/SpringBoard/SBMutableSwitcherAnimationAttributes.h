@class SBFFluidBehaviorSettings;

@interface SBMutableSwitcherAnimationAttributes : SBSwitcherAnimationAttributes

@property (nonatomic) long long updateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *layoutSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *positionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *opacitySettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cornerRadiusSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *clippingSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *meshSettings;
@property (nonatomic) long long layoutUpdateMode;
@property (nonatomic) long long positionUpdateMode;
@property (nonatomic) long long scaleUpdateMode;
@property (nonatomic) long long opacityUpdateMode;
@property (nonatomic) long long cornerRadiusUpdateMode;
@property (nonatomic) long long clippingUpdateMode;
@property (nonatomic) long long titleAndIconOpacityUpdateMode;
@property (nonatomic) long long meshUpdateMode;

@end
