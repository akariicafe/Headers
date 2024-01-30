@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL hasSeenACaseLatchCoverOnce;
@property (readonly, nonatomic) BOOL disableHomeButton;
@property (readonly, nonatomic) BOOL useHardwareSwitchAsOrientationLock;
@property (readonly, nonatomic) BOOL disableProximitySensor;
@property (readonly, nonatomic) BOOL disableHomeButtonDoublePress;
@property (nonatomic) long long homeButtonHapticType;

- (void)_bindAndRegisterDefaults;

@end
