@class PUBrowsingViewModel, PXVisualIntelligenceManager, NSString;

@interface PUOneUpVisualImageAnalyzingController : NSObject <PUBrowsingViewModelChangeObserver>

@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly, nonatomic) PXVisualIntelligenceManager *visualImageManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)initWithBrowsingViewModel:(id)a0;
- (void)_requestVKImageAnalysisForAssetViewModel:(id)a0;
- (void)_cancelVKImageAnalysisForAssetViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
