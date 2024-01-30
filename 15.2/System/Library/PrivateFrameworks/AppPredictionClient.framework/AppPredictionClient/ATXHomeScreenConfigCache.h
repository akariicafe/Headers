@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)a0;
+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)initWithPath:(id)a0;
- (BOOL)hasWidgetsOnTheHomeScreen;
- (BOOL)_writeData:(id)a0 toFileAtPath:(id)a1;
- (id)_readDataFromFileAtPath:(id)a0 error:(id *)a1;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (id)_filePathForHomeScreenPageConfig;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)_filePathForDockConfig;
- (id)_filePathForTodayPage;
- (void).cxx_destruct;
- (id)init;
- (id)prettyPrintedJSON;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)a0;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (id)loadDockAppListWithError:(id *)a0;
- (BOOL)_writeRootObject:(id)a0 toFileAtPath:(id)a1 error:(id *)a2;

@end
