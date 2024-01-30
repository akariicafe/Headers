@class PXMessagesStackView, PXAssetReference, PXAssetsDataSourceManager, UIView, PXUIMediaProvider, NSString;
@protocol CKGradientReferenceView;

@interface CKGenericPhotoStackBalloonView : CKBalloonView <PXAssetsDataSourceManagerObserver>

@property (readonly, nonatomic) PXMessagesStackView *stackView;
@property (retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXAssetReference *currentAssetReference;
@property (nonatomic) BOOL wantsContactImageLayout;
@property (readonly, nonatomic) double horizontalContentMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)horizontalContentMarginForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_additionalItemsCountDidChange;
- (id)_createStackView;
- (BOOL)_scrollLeadingAnimated:(BOOL)a0;
- (BOOL)_scrollTrailingAnimated:(BOOL)a0;
- (id)createOverlayImageView;
- (BOOL)pageLeftAnimated:(BOOL)a0;
- (BOOL)pageRightAnimated:(BOOL)a0;
- (void)setHasOverlay:(BOOL)a0 autoDismiss:(BOOL)a1;
- (void)setHorizontalContentMarginAdjustment:(double)a0 edge:(long long)a1;

@end
