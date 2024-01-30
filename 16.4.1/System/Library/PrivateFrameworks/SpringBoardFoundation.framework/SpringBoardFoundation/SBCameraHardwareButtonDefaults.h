@interface SBCameraHardwareButtonDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) double shutterButtonLongPressTimeout;
@property (readonly, nonatomic) double shutterButtonLongPressCancellationTimeout;
@property (readonly, nonatomic) BOOL shutterButtonShouldUsePocketDetection;

- (void)_bindAndRegisterDefaults;

@end
