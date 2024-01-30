@class SBFTraitsArbitrationDeviceOrientationInputs, SBFTraitsArbitrationKeyboardInputs, SBFTraitsArbitrationInterfaceIdiomInputs, NSString;

@interface SBFTraitsArbitrationInputs : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) SBFTraitsArbitrationInterfaceIdiomInputs *interfaceIdiomInputs;
@property (readonly, copy, nonatomic) SBFTraitsArbitrationDeviceOrientationInputs *deviceOrientationInputs;
@property (readonly, copy, nonatomic) SBFTraitsArbitrationKeyboardInputs *keyboardInputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithInterfaceIdiomInputs:(id)a0 deviceOrientationInputs:(id)a1 keyboardInputs:(id)a2;

@end
