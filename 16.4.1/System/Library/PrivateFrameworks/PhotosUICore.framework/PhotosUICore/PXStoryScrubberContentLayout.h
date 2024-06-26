@class NSMutableIndexSet, NSString, PXNumberAnimator, PXStoryPagedTimelineSpec, NSMutableDictionary, PXStoryModel, PXStoryViewModel, NSIndexSet;
@protocol PXGAXResponder;

@interface PXStoryScrubberContentLayout : PXStoryModelTimelineLayout <PXGSolidColorSource, PXGViewSource, PXChangeObserver, PXGAXResponder, PXGFocusableViewDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned int _backgroundSpriteIndex;
    unsigned int _currentSegmentCursorSpriteIndex;
    unsigned int _currentTimeCursorSpriteIndex;
    unsigned int _scrollPositionCursorSpriteIndex;
    unsigned int _wholeScrubberFocusSpriteIndex;
    NSIndexSet *_supportedResourceKindsForClipLayouts;
    BOOL _didUpdateTimelineTranslationXAnimatorOnce;
    BOOL _isWaitingForFocusableViewUserDataUpdate;
    NSMutableIndexSet *_axSpriteIndexes;
    unsigned short _backgroundMediaVersion;
    unsigned short _hostingSpritesMediaVersion;
    NSMutableDictionary *_segmentIdentifiersToHostingSpriteIndexes;
    struct _PXGSpriteIndexRange { unsigned int location; unsigned int length; } _hostingSpritesIndexRange;
}

@property (retain, nonatomic) PXStoryPagedTimelineSpec *pagedTimelineSpec;
@property (readonly, nonatomic) PXNumberAnimator *timelineTranslationXAnimator;
@property (readonly, nonatomic) PXNumberAnimator *timelineTranslationYAnimator;
@property (retain, nonatomic) PXStoryModel *mainModel;
@property (nonatomic) BOOL containsFocus;
@property (nonatomic) double focusHintTranslationY;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGAXResponder> axNextResponder;

- (void)axGroup:(id)a0 didChange:(unsigned long long)a1 userInfo:(id)a2;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)_updateBackground;
- (void)alphaDidChange;
- (id)axContentInfoAtSpriteIndex:(unsigned int)a0;
- (id)initWithModel:(id)a0;
- (void)didUpdate;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (id)initWithViewModel:(id)a0;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (void)_invalidateScrollViewProperties;
- (BOOL)axGroup:(id)a0 didRequestToPerformAction:(long long)a1 userInfo:(id)a2;
- (id)axSpriteIndexes;
- (void)_updateContentSize;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)axVisibleSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (void)_updateMainModel;
- (void)visibleRectDidChange;
- (void)_invalidateContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })axFrame;
- (void)referenceDepthDidChange;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_invalidateMainModel;
- (void)willUpdate;
- (void)referenceSizeDidChange;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (id)preferredFocusLayouts;
- (void)_invalidateHostingSpritesLayout;
- (unsigned long long)axFocusabilityForSpriteAtIndex:(unsigned int)a0;
- (void)focusableView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSegmentWithIdentifier:(long long)a0;
- (void)focusableViewDidUpdateUserInfo:(id)a0;
- (id)_assetFetchResultForTimelineIndex:(long long)a0;
- (unsigned long long)_axScrubberFractionDenominator;
- (long long)_axScrubberFractionNumerator;
- (long long)_currentFocusMode;
- (double)_displayedContentWidth;
- (void)_fadeClipLayoutIfNeeded:(id)a0 layoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_handleScrollTimeline:(id)a0 inGroup:(id)a1;
- (unsigned int)_hostingSpriteIndexForSegmentIdentifier:(long long)a0;
- (void)_invalidateAXSpriteIndexes;
- (void)_invalidateBackground;
- (void)_invalidateCursors;
- (void)_invalidateHostingSpritesFocus;
- (void)_invalidatePagedTimelineSpec;
- (void)_invalidateTimelineTranslationXAnimator;
- (void)_invalidateTimelineTranslationYAnimator;
- (long long)_segmentIdentifierForHostingSpriteIndex:(unsigned int)a0;
- (void)_updateAXSpriteIndexes;
- (void)_updateCursors;
- (void)_updateHostingSpritesFocus;
- (void)_updateHostingSpritesLayout;
- (void)_updatePagedTimelineSpec;
- (void)_updateScrollViewProperties;
- (void)_updateTimelineTranslationXAnimator;
- (void)_updateTimelineTranslationYAnimator;
- (void)axDidUpdateFocusInContext:(id)a0;
- (void)configureClipLayout:(id)a0;
- (void)didUpdateClipLayout:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didUpdateTimelineContent;
- (void)focusableView:(id)a0 didHintFocusMovement:(id)a1;
- (void)handleModelChange:(unsigned long long)a0;
- (id)mainLayoutSpec;
- (id)preferredFocusSpriteIndexes;
- (BOOL)shouldSetContentSizeToReferenceSize;
- (id)supportedResourceKindsForClipLayouts;
- (void)updateClipsCornerRadius;
- (void)updateDisplayedTimeRange;
- (void)updateDisplayedTimeline;
- (void)updateDisplayedTimelineRect;
- (id)viewLayoutSpec;

@end
