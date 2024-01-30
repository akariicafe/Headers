@class PXMomentShareStatusPresentation, NSString, PXPeopleSuggestionsDataSourceManager, PXCMMViewModel, UIView, NSArray, PXCMMPosterBannerView;
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
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (weak, nonatomic) id<PXCMMBannerTileControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;

+ (id)new;

- (void)becomeReusable;
- (void)_updateCounts;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (id)init;
- (void).cxx_destruct;
- (void)_updateLoadingPeopleSuggestions;
- (void)_configureBannerViewActionButtonWithTitle:(id)a0;
- (void)_handleButtonActionWithTitle:(id)a0;
- (void)_updateBannerActionButton;
- (void)_updateContainsUnverifierPersons;
- (void)_updateLocalizedNamesByViewModel;
- (void)_updatePeopleSuggestionNames;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;
- (id)initWithActivityType:(unsigned long long)a0 sourceType:(unsigned long long)a1 viewModel:(id)a2 momentShareStatusPresentation:(id)a3 importStatusManager:(id)a4;

@end
