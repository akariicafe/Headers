@class NSString, PXPhotosViewModel, PXZoomablePhotosLayout, PXZoomablePhotosViewModel;
@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate;

@interface PXZoomablePhotosBodyLayoutProvider : NSObject <PXChangeObserver, PXPhotosSectionBodyLayoutProvider> {
    PXZoomablePhotosLayout *_zoomablePhotosLayout;
}

@property (readonly, nonatomic) PXZoomablePhotosViewModel *zoomablePhotosViewModel;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;

- (id)initWithViewModel:(id)a0;
- (id)init;
- (BOOL)shouldPreventFaultOutOfBodyLayout:(id)a0 inAssetSectionLayout:(id)a1;
- (void).cxx_destruct;
- (id)createSectionBodyLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outWantsDecoration:(BOOL *)a4;
- (void)_updatePhotosViewModelWithChanges:(unsigned long long)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)createInteractionForView:(id)a0;
- (void)configureSectionBodyLayout:(id)a0 inAssetSectionLayout:(id)a1 forSectionedLayout:(id)a2;
- (void)_configureZoomableLayoutDecorations:(id)a0 fromAssetSectionLayout:(id)a1;
- (void)_updateZoomableViewModelWithChanges:(unsigned long long)a0;

@end
