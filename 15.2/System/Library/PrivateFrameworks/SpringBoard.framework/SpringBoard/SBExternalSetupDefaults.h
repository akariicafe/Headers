@class NSString;

@interface SBExternalSetupDefaults : BSAbstractDefaultDomain

@property (nonatomic, getter=isDeviceSetup) BOOL deviceSetup;
@property (readonly, nonatomic) NSString *setupState;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
