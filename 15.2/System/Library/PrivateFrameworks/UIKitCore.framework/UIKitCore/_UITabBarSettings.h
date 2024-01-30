@interface _UITabBarSettings : PTSettings

@property (nonatomic) BOOL highlightSystemItems;
@property (nonatomic) BOOL showAlignmentGuides;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
