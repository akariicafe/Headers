@class SBFFluidBehaviorSettings;

@interface SBSwitcherAnimationAttributes : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) long long updateMode;
@property (retain, nonatomic) SBFFluidBehaviorSettings *layoutSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *positionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *scaleSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *opacitySettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cornerRadiusSettings;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
