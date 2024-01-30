@class NSString, PUTabbedLibrarySettings, NSArray, PXPreloadScheduler;

@interface PUTabbedLibraryViewModel : NSObject <PXUIKeyCommandNamespace>

@property (readonly, nonatomic) NSString *namespaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PUTabbedLibrarySettings *settings;
@property (retain, nonatomic) PXPreloadScheduler *preloadScheduler;
@property (retain, nonatomic) NSArray *tabInfos;

+ (id)viewModelWithDefaultParameters;
+ (id)supportedNavigationDestinationTypes;

- (void).cxx_destruct;
- (BOOL)_ppt_shouldShowNilTab;
- (BOOL)_shouldShowForYouTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowSharedTabForTabbedLibraryViewController:(id)a0;
- (void)performKeyCommand:(id)a0 withRootParticipant:(id)a1;
- (id)initWithSettings:(id)a0 preloadScheduler:(id)a1;
- (BOOL)_ppt_shouldShowBlankTab;
- (BOOL)_shouldShowSearchTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)a0;
- (BOOL)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)a0;
- (BOOL)tabbedLibraryViewController:(id)a0 shouldShowTabForContentMode:(int)a1;
- (void)uiKeyCommandsWithDelegate:(id)a0 addedIntoArray:(id)a1;
- (BOOL)_shouldShowPhotosTabForTabbedLibraryViewController:(id)a0;
- (id)tabInfoForContentMode:(int)a0;
- (id)tabbedLibraryViewController:(id)a0 tabBarItemForContentMode:(int)a1;

@end
