@class NSArray, PUTabbedLibrarySettings;

@interface PUTabbedLibraryViewModel : NSObject

@property (readonly, nonatomic) PUTabbedLibrarySettings *settings;
@property (readonly, nonatomic) NSArray *tabInfos;

+ (id)viewModelWithDefaultParameters;

- (id)initWithSettings:(id)a0;
- (BOOL)_shouldShowSharedTabForTabbedLibraryViewController:(id)a0;
- (id)tabInfoForContentMode:(int)a0;
- (id)tabbedLibraryViewController:(id)a0 tabBarItemForContentMode:(int)a1;
- (BOOL)_ppt_shouldShowNilTab;
- (BOOL)tabbedLibraryViewController:(id)a0 shouldShowTabForContentMode:(int)a1;
- (BOOL)_ppt_shouldShowBlankTab;
- (BOOL)_shouldShowSearchTabForTabbedLibraryViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldShowForYouTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)a0;

@end
