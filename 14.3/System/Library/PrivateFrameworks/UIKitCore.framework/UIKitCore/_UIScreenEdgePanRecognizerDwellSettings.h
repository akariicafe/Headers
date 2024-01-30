@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings

@property (nonatomic) double longPressTipPermittedHorizontalMovement;
@property (nonatomic) double longPressTipPermittedVerticalMovement;
@property (nonatomic) double longPressPermittedHorizontalMovement;
@property (nonatomic) double longPressPermittedVerticalMovement;
@property (nonatomic) double longPressRequiredDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
