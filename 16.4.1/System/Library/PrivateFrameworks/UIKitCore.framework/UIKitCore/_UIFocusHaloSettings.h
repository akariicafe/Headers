@interface _UIFocusHaloSettings : PTSettings

@property (nonatomic) double thickness;
@property (nonatomic) double gapWidth;
@property (nonatomic) BOOL debugEnabled;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
