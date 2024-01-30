@interface _UIBeamPointerSettings : _UIFreeformPointerSettings

@property (nonatomic) double minLength;
@property (nonatomic) double maxLength;
@property (nonatomic) double maxSnapLength;
@property (nonatomic) double width;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
