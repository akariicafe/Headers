@class NSString;

@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}

+ (BOOL)appPredictionPanelExistsInPage:(id)a0;
+ (BOOL)suggestionsWidgetExistsInPage:(id)a0;

- (id)initWithPath:(id)a0;
- (id)_filePathForTodayPage;
- (id)loadDockAppListWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_writeData:(id)a0 toFileAtPath:(id)a1;
- (id)_readDataFromFileAtPath:(id)a0 error:(id *)a1;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id *)a0;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id *)a0;
- (BOOL)_writeRootObject:(id)a0 toFileAtPath:(id)a1 error:(id *)a2;
- (id)prettyPrintedJSON;
- (id)_filePathForHomeScreenPageConfig;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)a0 error:(id *)a1;
- (BOOL)writeHomeScreenPageConfigurations:(id)a0 error:(id *)a1;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)a0;
- (BOOL)writeDockAppList:(id)a0 error:(id *)a1;
- (BOOL)writeTodayPageStacks:(id)a0 appPredictionPanels:(id)a1 error:(id *)a2;
- (id)_filePathForDockConfig;

@end
