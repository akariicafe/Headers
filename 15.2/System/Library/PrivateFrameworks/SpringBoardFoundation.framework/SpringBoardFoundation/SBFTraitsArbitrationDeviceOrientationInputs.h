@class NSString;

@interface SBFTraitsArbitrationDeviceOrientationInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) long long bksCurrentDeviceOrientation;
@property (readonly, nonatomic) long long bksNonFlatDeviceOrientation;
@property (readonly, nonatomic) long long bksRawDeviceOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCurrentDeviceOrientation:(long long)a0 nonFlatDeviceOrientation:(long long)a1 rawDeviceOrientation:(long long)a2;

@end
