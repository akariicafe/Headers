@class PXMomentShareStatusPresentation, NSString, PXCMMViewModel, UIView, UILabel, UIButton;
@protocol PXAssetImportStatusManager;

@interface PXCMMSectionHeaderController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject> {
    unsigned long long _activityType;
    PXCMMViewModel *_viewModel;
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;
    id<PXAssetImportStatusManager> _importStatusManager;
    BOOL _isViewLoaded;
    UIView *_underlyingView;
    UIButton *_actionButton;
    UIButton *_secondaryButton;
    UILabel *_photosLabel;
}

@property (nonatomic, setter=_setActionButtonType:) long long actionButtonType;
@property (nonatomic, setter=_setSecondaryActionButtonType:) long long secondaryActionButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;

+ (id)new;
+ (id)_buttonLabelFont;
+ (id)_photosLabelFont;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithActivityType:(unsigned long long)a0 viewModel:(id)a1 momentShareStatusPresentation:(id)a2 importStatusManager:(id)a3;
- (void)_loadViewIfNeeded;
- (void)_handleActionButtonTapped:(id)a0;
- (void)_handleSecondaryButtonTapped:(id)a0;
- (void)_layoutButtonWithSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_wantsActionButtons;
- (void)_updateActionButtons;
- (void)_selectAllAssets;
- (void)_deselectAllAssets;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;

@end
