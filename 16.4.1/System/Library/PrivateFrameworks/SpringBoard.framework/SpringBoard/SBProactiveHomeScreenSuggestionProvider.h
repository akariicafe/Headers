@class NSString, SBIconController, NSHashTable, ATXHomeScreenPrediction;

@interface SBProactiveHomeScreenSuggestionProvider : NSObject <ATXHomeScreenSuggestionClientObserver> {
    NSHashTable *_observers;
}

@property (readonly, weak, nonatomic) SBIconController *iconController;
@property (retain, nonatomic) ATXHomeScreenPrediction *currentPrediction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processUpdatedPredictions:(id)a0;
- (void)addObserver:(id)a0;
- (id)iconModel;
- (id)rootFolder;
- (id)_makeDataSourceForAtxWidget:(id)a0;
- (id)_iconDataSourceInIcon:(id)a0 withUniqueIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 widgetKind:(id)a3 suggestionSource:(long long)a4;
- (id)_supportedElementClasses;
- (void)removeObserver:(id)a0;
- (void)updatePredictions;
- (void)suggestionClientDidRefreshSuggestions:(id)a0;
- (id)initWithIconController:(id)a0;
- (void).cxx_destruct;

@end
