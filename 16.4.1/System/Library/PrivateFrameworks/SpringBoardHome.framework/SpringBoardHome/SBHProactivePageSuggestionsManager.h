@class SBRootFolder, ATXSuggestedPagesClient, SBHIconManager;

@interface SBHProactivePageSuggestionsManager : NSObject

@property (weak, nonatomic) SBHIconManager *iconManager;
@property (weak, nonatomic) SBRootFolder *rootFolder;
@property (retain, nonatomic) ATXSuggestedPagesClient *suggestedPagesClient;

- (id)initWithIconManager:(id)a0;
- (void).cxx_destruct;
- (void)_addLeafIcons:(id)a0 toList:(id)a1 iconModel:(id)a2 rootFolder:(id)a3 snapshot:(BOOL)a4;
- (void)_addSuggestedPage:(id)a0 atIndex:(unsigned long long)a1 forSnapshot:(BOOL)a2 focusMode:(id)a3;
- (void)_addSuggestedPageWithPageType:(id)a0 focusModeIdentifier:(id)a1;
- (id)_iconForATXHomeScreenApp:(id)a0 iconModel:(id)a1 rootFolder:(id)a2;
- (void)addSuggestedPages:(id)a0 withFocusModeIdentifier:(id)a1 forSnapshot:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithIconManager:(id)a0 overridingRootFolder:(id)a1;

@end
