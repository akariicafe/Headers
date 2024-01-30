@class NSString, PXRegionOfInterest, PXContentSyndicationCountsController, PXContentSyndicationGadgetViewModel, PXContentSyndicationItem, NSUserActivity, PXGadgetSpec, PXFooterViewModel, PXContentSyndicationGadgetView, PXImageRequesterHelper;
@protocol PXDisplayAsset, PXDisplayAssetFetchResult, PXUIImageProvider, PXContentSyndicationGadgetDelegate, PXDisplayAssetCollection, PXContentSyndicationSocialLayerHighlightProvider, PXContentSyndicationAssetFetchResultProvider;

@interface PXContentSyndicationGadget : NSObject <PXChangeObserver, PXContentSyndicationAssetFetchResultProviderChangeObserver, PXContentSyndicationGadgetViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXGadget> {
    id<PXContentSyndicationAssetFetchResultProvider> _keyImagesAssetFetchResultProvider;
    id<PXDisplayAssetFetchResult> _keyImagesAssetFetchResult;
    id<PXUIImageProvider> _imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> _socialLayerHighlightProvider;
    PXContentSyndicationCountsController *_countsController;
    PXFooterViewModel *_gridFooterViewModel;
    PXImageRequesterHelper *_frontImageRequesterHelper;
    PXImageRequesterHelper *_middleImageRequesterHelper;
    PXImageRequesterHelper *_backImageRequesterHelper;
}

@property (readonly, nonatomic) PXContentSyndicationGadgetViewModel *viewModel;
@property (readonly, nonatomic) PXContentSyndicationGadgetView *view;
@property (copy, nonatomic) id<PXDisplayAssetCollection> initialAssetCollection;
@property (copy, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (copy, nonatomic) id<PXDisplayAsset> referenceAssetForSocialLayerHighlight;
@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (copy, nonatomic) id /* block */ viewControllerPresenter;
@property (copy, nonatomic) id /* block */ viewControllerDismisser;
@property (retain, nonatomic) PXContentSyndicationItem *contentSyndicationItem;
@property (weak, nonatomic) id<PXContentSyndicationGadgetDelegate> delegate;
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) BOOL contentViewHiddenForOneUpTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentRect;

- (void)_updateCounts;
- (void)userDidSelectGadget;
- (void)prepareCollectionViewItem:(id)a0;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)commitPreviewView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)previewParametersForTargetPreviewView:(id)a0;
- (id)contextMenuWithSuggestedActions:(id)a0;
- (void)socialLayerHighlightProvider:(id)a0 didChangeSocialLayerHighlight:(id)a1 forAsset:(id)a2;
- (id)additionalContextMenuActionsForAttributionViewInContentSyndicationGadgetView:(id)a0;
- (void)assetFetchResultProvider:(id)a0 didChangeAssetFetchResult:(id)a1 forAssetCollection:(id)a2;
- (id)initWithAssetFetchResultProvider:(id)a0 imageProvider:(id)a1 socialLayerHighlightProvider:(id)a2;
- (void)_retrieveAssetCollectionIfNeeded;
- (void)_presentDetailViewController;
- (void)presentGridAnimated:(BOOL)a0;
- (void)_donateUserActivityForAssetCollectionIfNeeded;
- (void)presentOneUpAnimated:(BOOL)a0;
- (id)_createActionForType:(id)a0 image:(id)a1 attributes:(unsigned long long)a2;
- (void)_fileRadar;
- (void)_refreshGadgetContents;
- (void)_fetchKeyImages;
- (void)_updateImageRequesterHelper:(id)a0 withAsset:(id)a1;
- (void)_handleKeyImage:(id)a0 atIndex:(long long)a1;
- (void)_updateOverlayTitleWithDetailedCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 savedCount:(long long)a1;
- (void)_updateGridFooterViewModel;

@end
