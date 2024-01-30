@interface SBHWidgetIntroductionSettings : PTSettings

@property (nonatomic) BOOL showWidgetIntroConvenienceControl;
@property (nonatomic) BOOL editButtonAsUndo;
@property (nonatomic) BOOL simpleBottomSnaking;
@property (nonatomic) BOOL bumpLeastUsedApps;
@property (nonatomic) BOOL showXLTVWidget;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
