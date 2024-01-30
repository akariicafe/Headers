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

- (void)alphaDidChange;
- (void)didUpdate;
- (id)initWithViewModel:(id)a0;
- (id)axSpriteIndexes;
- (void)_invalidateSkipSegmentActionDate;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)_invalidateSublayouts;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateSublayoutsAlpha;
- (void)_invalidateWantsVisible;
- (void)update;
- (BOOL)_shouldEnableFocusGuide;
- (void)_updateLastScrubbedDate;
- (void)_updateSublayouts;
- (void)_updateMainModel;
- (void)_updateSkipSegmentActionDate;
- (void)_loadTVSublayoutsIfNeeded;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (void)_invalidateLastScrubbedDate;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;
- (void)_invalidateVisibilityFraction;
- (void)_updateFocusGuide;
- (void)_loadSublayoutsIfNeeded;
- (void)_updateSublayoutsAlpha;
- (id)init;
- (void)referenceDepthDidChange;
- (void)_invalidateMainModel;
- (void)willUpdate;
- (void)referenceSizeDidChange;
- (void)_updateWantsVisible;
- (void)_updateVisibilityFraction;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (void)_invalidateFocusGuide;
- (id)preferredFocusLayouts;

@end
