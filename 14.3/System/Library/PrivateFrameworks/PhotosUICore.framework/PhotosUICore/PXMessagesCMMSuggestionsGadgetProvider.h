@class PXCMMSuggestionsDataSourceManager, NSString, PXCMMSuggestionsDataSource, PXMessagesExtensionViewModel, NSArray;

@interface PXMessagesCMMSuggestionsGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXMessagesCMMSuggestionGadgetActionDelegate> {
    PXCMMSuggestionsDataSource *_dataSource;
    BOOL _didGenerateGadgets;
    PXMessagesExtensionViewModel *_viewModel;
    NSArray *_suggestionGadgets;
}

@property (retain, nonatomic) PXCMMSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (nonatomic) double contentHeightAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (void).cxx_destruct;
- (void)didSelectSuggestionGadget:(id)a0;
- (id)initWithViewModel:(id)a0 suggestionsDataSourceManager:(id)a1;
- (id)_createSuggestionGadgetWithSuggestion:(id)a0;
- (void)_updateNoContentGadgetIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithIdentifier:(id)a0;
- (void)_setDataSource:(id)a0 changes:(id)a1;

@end
