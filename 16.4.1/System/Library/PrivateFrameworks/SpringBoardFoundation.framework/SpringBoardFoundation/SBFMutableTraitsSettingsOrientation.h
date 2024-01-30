@class SBFTraitsArbitrationDeviceOrientationInputs;
@protocol BSInterfaceOrientationMapResolving, BSXPCSecureCoding;

@interface SBFMutableTraitsSettingsOrientation : SBFTraitsSettingsOrientation

@property (nonatomic) long long orientation;
@property (retain, nonatomic) id<BSInterfaceOrientationMapResolving, BSXPCSecureCoding> orientationMapResolver;
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *validatedOrientationInputs;
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *rawOrientationInputs;

- (void)setOrientation:(long long)a0;
- (void)setRawOrientationInputs:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOrientationMapResolver:(id)a0;
- (void)setValidatedOrientationInputs:(id)a0;

@end
