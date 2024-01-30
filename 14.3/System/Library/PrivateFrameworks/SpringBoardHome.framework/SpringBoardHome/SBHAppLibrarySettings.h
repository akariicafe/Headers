@class PTOutlet;

@interface SBHAppLibrarySettings : PTSettings

@property (retain, nonatomic) PTOutlet *minimumNumberOfIconsToShowSectionHeaderInDeweySearchOutlet;
@property (nonatomic) long long minimumNumberOfIconsToShowSectionHeaderInDeweySearch;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
