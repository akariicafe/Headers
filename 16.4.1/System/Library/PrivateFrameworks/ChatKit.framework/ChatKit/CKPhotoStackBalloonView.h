@class NSString, CKMediaObjectImageProvider, CKMediaObjectAssetDataSourceManager;
@protocol CKPhotoStackBalloonViewDelegate;

@interface CKPhotoStackBalloonView : CKGenericPhotoStackBalloonView <PXMessagesStackViewDelegate>

@property (weak, nonatomic) id<CKPhotoStackBalloonViewDelegate> delegate;
@property (retain, nonatomic) CKMediaObjectImageProvider *mediaProvider;
@property (retain, nonatomic) CKMediaObjectAssetDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)_additionalItemsCountDidChange;
- (id)_createStackView;
- (void)_updateAdditionalItemsCount;
- (void)configureForMessagePart:(id)a0;
- (void)removeTransitionView;
- (void)stackView:(id)a0 didChangeCurrentAssetReference:(id)a1 isProgrammaticChange:(BOOL)a2 didChangeIndex:(BOOL)a3;
- (void)stackView:(id)a0 didSelectAssetReference:(id)a1;
- (BOOL)stackView:(id)a0 shouldAutoplayAsset:(id)a1;
- (void)stackViewDidSelectAdditionalItemsCard:(id)a0;
- (id)transitionViewForCurrentItem:(id)a0 sourceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
