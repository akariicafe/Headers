@class PXStoryModel, NSSet, PXStoryViewModel, NSString, PXCArrayStore, PXStoryStyleManager, PXNumberAnimator;

@interface PXStoryStyleChromeContainerLayout : PXGAbsoluteCompositeLayout <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct _NSRange { unsigned long long location; unsigned long long length; } _styleSublayoutRange;
    PXCArrayStore *_framesArrayStore;
}

@property (readonly, nonatomic) PXNumberAnimator *visibilityAnimator;
@property (retain, nonatomic) PXStoryStyleManager *styleManager;
@property (retain, nonatomic) PXStoryModel *storyModel;
@property (retain, nonatomic) NSSet *artworkPreloadingRecords;
@property (retain, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)referenceDepthDidChange;
- (void)screenScaleDidChange;
- (void)_updateStyleManager;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (void)dealloc;
- (void)_invalidateStoryModel;
- (void)_updateStoryModel;
- (void)_invalidateStyleManager;
- (void)_invalidateStyleLayouts;
- (void)_updateStyleLayouts;
- (void)_invalidateVisibilityAnimator;
- (void)_updateVisibilityAnimator:(BOOL)a0;
- (void)_invalidateStyleLayoutsContent;
- (void)_updateStyleLayoutsContent;
- (void)_invalidateResourcePreloading;
- (void)_updateResourcePreloading;

@end
