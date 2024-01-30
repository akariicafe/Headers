@class PUBrowsingViewModel, PUAssetViewModel, PUAssetReference, PUAssetActionManager, NSString, UIButton;

@interface PUOneUpSelectionIndicatorTileViewController : PUTileViewController <PXChangeObserver, PUAssetViewModelChangeObserver>

@property (nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) BOOL _performingChanges;
@property (nonatomic, setter=_setNeedsUpdateButton:) BOOL _needsUpdateButton;
@property (retain, nonatomic, setter=_setButton:) UIButton *_button;
@property (nonatomic, getter=_isButtonVisible, setter=_setButtonVisible:) BOOL _buttonVisible;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (retain, nonatomic) PUAssetActionManager *actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)becomeReusable;
- (void)viewDidLoad;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (void)_handleButton:(id)a0;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_reviewActionManager;
- (id)_selectionManager;
- (void)_invalidateButton;
- (void)_updateButtonIfNeeded;
- (void)_setButtonVisible:(BOOL)a0 animated:(BOOL)a1;

@end
