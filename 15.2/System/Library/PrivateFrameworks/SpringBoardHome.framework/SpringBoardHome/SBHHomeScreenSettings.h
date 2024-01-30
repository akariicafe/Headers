@class SBHIconAnimationRootSettings, SBHIconSettings, SBHHomePullToSearchSettings, SBHWidgetIntroductionSettings, SBHIconEditingSettings, SBHFolderSettings, SBHWidgetSettings, SBHAppLibrarySettings, SBHRootFolderSettings;

@interface SBHHomeScreenSettings : PTSettings

@property (nonatomic) BOOL usesMinimumViableHomeScreen;
@property (nonatomic) BOOL showPopOvers;
@property (retain, nonatomic) SBHIconAnimationRootSettings *iconAnimationSettings;
@property (retain, nonatomic) SBHIconSettings *iconSettings;
@property (retain, nonatomic) SBHFolderSettings *folderSettings;
@property (retain, nonatomic) SBHRootFolderSettings *rootFolderSettings;
@property (retain, nonatomic) SBHIconEditingSettings *iconEditingSettings;
@property (retain, nonatomic) SBHWidgetSettings *widgetSettings;
@property (retain, nonatomic) SBHAppLibrarySettings *appLibrarySettings;
@property (retain, nonatomic) SBHHomePullToSearchSettings *pullToSearchSettings;
@property (retain, nonatomic) SBHWidgetIntroductionSettings *widgetIntroductionSettings;

+ (id)homeScreenDefaults;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
