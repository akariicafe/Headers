@class PXStoryModel, PXStoryScrubberContentLayout, PXStoryViewModel, PXStoryScrubberScrollLayout, NSDate, NSNumber, NSString;

@interface PXStoryScrubberLayout : PXGSplitLayout <PXChangeObserver, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isUpdatingWantsVisible;
    unsigned int _focusGuideSpriteIndex;
}

@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (retain, nonatomic) PXStoryModel *mainModel;
@property (retain, nonatomic) NSDate *currentSkipSegmentActionDate;
@property (retain, nonatomic) NSDate *lastScrubbedDate;
@property (retain, nonatomic) PXStoryScrubberContentLayout *contentLayout;
@property (retain, nonatomic) PXStoryScrubberScrollLayout *scrollLayout;
@property (retain, nonatomic) NSNumber *alphaOverride;
@property (nonatomic) unsigned short focusGuideContentVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithViewModel:(id)a0;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (id)axSpriteIndexes;
- (void)_updateSublayouts;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_invalidateWantsVisible;
- (void)_loadTVSublayoutsIfNeeded;
- (void)_updateLastScrubbedDate;
- (void)_invalidateMainModel;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (void)_updateSublayoutsAlpha;
- (void)didUpdate;
- (id)preferredFocusLayouts;
- (void)_invalidateLastScrubbedDate;
- (void)alphaDidChange;
- (void)_invalidateFocusGuide;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (void)_invalidateSkipSegmentActionDate;
- (void)_invalidateSublayouts;
- (void)_invalidateSublayoutsAlpha;
- (void)_updateFocusGuide;
- (void)_updateSkipSegmentActionDate;
- (void)_updateWantsVisible;
- (void)_invalidateVisibilityFraction;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;
- (void)_loadSublayoutsIfNeeded;
- (BOOL)_shouldEnableFocusGuide;
- (void)_updateMainModel;
- (void)_updateVisibilityFraction;

@end
