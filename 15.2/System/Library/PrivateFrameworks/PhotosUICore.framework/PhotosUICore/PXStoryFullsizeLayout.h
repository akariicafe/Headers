@class NSString, PXGEffect, NSDictionary, NSMutableIndexSet, PXStoryTransitionController;
@protocol PXStoryStyleDescriptor;

@interface PXStoryFullsizeLayout : PXStoryModelTimelineLayout <PXStoryTransitionSource, PXGEntityChangeObserver, PXChangeObserver, PXTapToRadarDiagnosticProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _timelineContentUpdateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _timelineContentPostUpdateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    BOOL _allowsTransitionEffects;
    unsigned int _transitionEffectSpriteIndex;
    unsigned int _transitionAuxiliaryEffectSpriteIndex;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } strictVisibleTimelineRect;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } strictVisibleTimeRange;
@property (retain, nonatomic) PXStoryTransitionController *transitionController;
@property (nonatomic) struct { long long fromSegmentIdentifier; long long toSegmentIdentifier; } activeTransition;
@property (retain, nonatomic) PXGEffect *transitionEffect;
@property (retain, nonatomic) PXGEffect *auxiliaryTransitionEffect;
@property (nonatomic) double transitionEffectAlpha;
@property (nonatomic) double auxiliaryTransitionEffectAlpha;
@property (retain, nonatomic) NSDictionary *zPositionsByClipIdentifier;
@property (readonly, nonatomic) NSMutableIndexSet *previouslyReportedClipIdentifiers;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadiusOverride;
@property (readonly, nonatomic) id<PXStoryStyleDescriptor> overrideStyleInfo;
@property (nonatomic) double textAlpha;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transitionViewport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)viewMode;
- (id)hitTestResultForSpriteIndex:(unsigned int)a0;
- (void)entityManagerDidChange;
- (void)getDetailedPresentedPlacement:(id)a0 forItemReference:(id)a1;
- (BOOL)isAnimating;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)referenceSizeDidChange;
- (id)initWithModel:(id)a0;
- (void)setDetailedPlacementOverride:(id)a0 forItemReference:(id)a1;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)configureClipLayout:(id)a0;
- (void)updateClipsCornerRadius;
- (void)updateDisplayedTimeline;
- (void)updateDisplayedTimeRange;
- (void)updateDisplayedTimelineRect;
- (void)didUpdateTimelineContent;
- (void)entityManager:(id)a0 componentDidChange:(id)a1;
- (id)layoutForClipWithIdentifier:(long long)a0;
- (void)didBeginTransitionWithEffect:(id)a0 auxiliaryEffect:(id)a1;
- (void)didEndTransitionWithEffect:(id)a0 auxiliaryEffect:(id)a1;
- (void)applyTransitionEffectAlpha:(double)a0 auxiliaryEffectAlpha:(double)a1;
- (id)initWithModel:(id)a0 overrideStyleInfo:(id)a1;
- (double)alphaForClipLayout:(id)a0;
- (id)presentedSnapshot;
- (void)displayedTimelineDidChange;
- (void)updatePresentedTimelineTransition;
- (void)willUpdateTimelineContent;
- (void)_invalidateVisibleSegmentIdentifiers;
- (void)_updateVisibleSegmentIdentifiers;
- (void)_invalidateActiveTransition;
- (void)_updateActiveTransition;
- (void)_invalidateClipZPositions;
- (void)_updateClipZPositions;
- (void)_invalidateTransitionEffectSprites;
- (void)_updateTransitionEffectSprites;
- (double)proposedZPositionForClipLayoutWithClipIdentifier:(long long)a0;
- (void)_invalidateVisibleClipsReporting;
- (void)_updateVisibleClipsReporting;
- (void)_invalidateTransitionController;
- (void)_updateTransitionController;

@end
