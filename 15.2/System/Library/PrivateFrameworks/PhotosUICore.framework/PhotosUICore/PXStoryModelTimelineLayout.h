@class NSString, PXStoryModel;

@interface PXStoryModelTimelineLayout : PXStoryTimelineLayout <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willUpdate;
- (void)didUpdate;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)initWithModel:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)configureClipLayout:(id)a0;
- (void)updateClipsCornerRadius;
- (void)updateDisplayedTimeline;
- (void)updateDisplayedTimeRange;
- (void)updateDisplayedTimelineRect;
- (void)updatePresentedTimelineTransition;
- (void)invalidateDisplayedTimeline;
- (void)invalidateDisplayedTimeRange;
- (void)invalidateDisplayedRect;
- (void)invalidatePresentedTimelineTransition;
- (void)invalidateClipsCornerRadius;

@end
