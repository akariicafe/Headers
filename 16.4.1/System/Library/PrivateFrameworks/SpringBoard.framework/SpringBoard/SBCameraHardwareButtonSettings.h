@interface SBCameraHardwareButtonSettings : PTSettings

@property (nonatomic) double shutterButtonLongPressTimeout;
@property (nonatomic) double shutterButtonLongPressCancellationTimeout;
@property (nonatomic) BOOL shutterButtonShouldUsePocketDetection;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
