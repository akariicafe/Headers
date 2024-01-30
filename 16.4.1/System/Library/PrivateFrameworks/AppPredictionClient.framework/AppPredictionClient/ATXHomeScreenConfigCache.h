@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (id)initWithPath:(id)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)_filePathForHomeScreenPageConfig;
- (id)loadDockAppListWithError:(id *)a0;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (id)_filePathForTodayPage;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (id)_filePathForDockConfig;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(BOOL)a0 error:(id *)a1;
- (id)homeScreenWidgetPersonalities;
- (id)init;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (id)prettyPrintedJSON;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;

@end
