@class NSNumber, PXStoryViewModel, NSString;

@interface PXStoryViewLegibilityOverlayLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _solidDimmingSpriteIndex;
    unsigned int _topGradientDimmingSpriteIndex;
    unsigned int _bottomGradientDimmingSpriteIndex;
    unsigned short _gradientResizableCapInsetsIndex;
}

@property (retain, nonatomic) NSNumber *alphaOverride;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (id)imageConfigurationAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateContent;
- (void)_invalidateContent;
- (id)axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;

@end
