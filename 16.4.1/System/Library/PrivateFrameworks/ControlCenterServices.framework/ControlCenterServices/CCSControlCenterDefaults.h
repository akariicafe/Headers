@interface CCSControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic) unsigned long long presentationGesture;
@property (nonatomic) unsigned long long userInvocationCount;
@property (nonatomic) BOOL shouldEnablePrototypeFeatures;
@property (nonatomic) BOOL shouldEnableInternalModules;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;
- (unsigned long long)_defaultPresentationGesture;

@end
