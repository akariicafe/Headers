@class UIView, NSString, PXCMMPosterBannerView, PXCMMViewModel, NSArray, PXMomentShareStatusPresentation, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider;
@protocol PXCMMBannerTileControllerDelegate, PXAssetImportStatusManager;

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXReusableObject, PXUIViewBasicTile> {
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMViewModel *_viewModel;
    id<PXAssetImportStatusManager> _importStatusManager;
    NSArray *_localizedNames;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
}

@property (retain, nonatomic) PXCMMPosterBannerView *bannerView;
@property (retain, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (retain, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (weak, nonatomic) id<PXCMMBannerTileControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;

+ (id)new;

- (void)_updateLoadingPeopleSuggestions;
- (id)init;
- (id)initWithActivityType:(unsigned long long)a0 sourceType:(unsigned long long)a1 viewModel:(id)a2 momentShareStatusPresentation:(id)a3 importStatusManager:(id)a4;
- (void)setPeopleSuggestionDataSourceManager:(id)a0 mediaProvider:(id)a1;
- (void)_configureBannerViewActionButtonWithTitle:(id)a0;
- (void)_updateContainsUnverifierPersons;
- (void)_updatePeopleSuggestionNames;
- (void)_updateLocalizedNamesByViewModel;
- (void).cxx_destruct;
- (void)_updateBannerActionButton;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateCounts;
- (void)prepareForReuse;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
