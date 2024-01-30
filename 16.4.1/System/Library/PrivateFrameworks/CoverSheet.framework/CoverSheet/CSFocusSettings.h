@interface CSFocusSettings : PTSettings

@property (nonatomic) BOOL gatesOnControlCenterAccess;
@property (nonatomic) BOOL requiresAuthWithoutControlCenterAccess;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
