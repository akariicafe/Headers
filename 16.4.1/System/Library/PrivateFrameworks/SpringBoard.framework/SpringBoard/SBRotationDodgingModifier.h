@class NSUUID;

@interface SBRotationDodgingModifier : SBDodgingModifier

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) long long fromOrientation;
@property (nonatomic) long long toOrientation;
@property (nonatomic) unsigned long long phase;

- (void).cxx_destruct;
- (long long)animationBehaviorModeForIdentifier:(id)a0;
- (id)handleRotationEvent:(id)a0;
- (id)initWithIdentifier:(id)a0 fromOrientation:(long long)a1 toOrientation:(long long)a2;

@end
