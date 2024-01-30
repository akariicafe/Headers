@class SBFTraitsArbitrationDeviceOrientationInputs, NSString;
@protocol BSInterfaceOrientationMapResolving, BSXPCSecureCoding;

@interface SBFTraitsSettingsOrientation : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>

@property (nonatomic) long long orientation;
@property (retain, nonatomic) id<BSInterfaceOrientationMapResolving, BSXPCSecureCoding> orientationMapResolver;
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *validatedOrientationInputs;
@property (retain, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *rawOrientationInputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithOrientation:(long long)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqualToOrientationSettings:(id)a0;
- (id)initWithOrientationSettings:(id)a0;
- (id)initWithOrientation:(long long)a0 orientationMapResolver:(id)a1 validatedOrientationInputs:(id)a2 rawOrientationInputs:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
