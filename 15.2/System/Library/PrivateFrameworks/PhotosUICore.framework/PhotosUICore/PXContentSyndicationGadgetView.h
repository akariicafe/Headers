@class PXRegionOfInterest, NSString, PXContentSyndicationItemAssetPreviewView, SLAttributionView, UIView, PXContentSyndicationGadgetViewModel;
@protocol PXContentSyndicationGadgetViewDelegate;

@interface PXContentSyndicationGadgetView : UICollectionViewCell <PXChangeObserver, SLAttributionViewDelegate> {
    PXContentSyndicationItemAssetPreviewView *_assetPreviewView;
    SLAttributionView *_socialLayerAttributionView;
}

@property (retain, nonatomic) PXContentSyndicationGadgetViewModel *viewModel;
@property (weak, nonatomic) id<PXContentSyndicationGadgetViewDelegate> delegate;
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) BOOL contentViewHiddenForOneUpTransition;
@property (readonly, nonatomic) UIView *previewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 viewModel:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)focusEffect;
- (id)contextMenuItemsForAttributionView:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 applyLayoutToSubviews:(BOOL)a1;
- (id)replyActionFromAttributionView;
- (void)_updateKeyImageCount;
- (void)_updateKeyImages;
- (void)_updateOverlayTitle;
- (void)_updateSocialLayerAttributionView;

@end
