@class HUClipScrubberDataSource, HFCameraPlaybackEngine, UICollectionView, NSString;
@protocol HFCameraRecordingEvent;

@interface HUClipScrubberScrollDelegate : NSObject <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (nonatomic, getter=isUserScrubbing) BOOL userScrubbing;
@property (nonatomic) BOOL hasUserInteractedWithScrubber;
@property (nonatomic) double lastContentWidth;
@property (retain, nonatomic) id<HFCameraRecordingEvent> currentEvent;
@property (nonatomic) double targetScrollOffset;
@property (weak, nonatomic) HUClipScrubberDataSource *dataSource;
@property (weak, nonatomic) UICollectionView *clipCollectionView;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic) BOOL shouldIgnoreScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (id)initWithDataSource:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)updateCollectionView:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)finishEditing;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)beginEditing;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)updatePlaybackEngineDate:(id)a0;
- (BOOL)_shouldScrollBypassPlaybackEngineUpdate;
- (float)playheadPosition;
- (void)_handleOutOfBoundsTimelinePosition:(float)a0;
- (id)_selectedDateForEventInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_selectedDateForAreaOfNoActivityAtPoint:(struct CGPoint { double x0; double x1; })a0 inScrollView:(id)a1;
- (void)_updateFamiliarFaceCell;
- (BOOL)_doesPrecedingSpacerSpanMultipleDaysForEvent:(id)a0;
- (id)_selectedDateForTodayFromEvent:(id)a0 percentDuration:(float)a1;
- (id)_selectedDateForYesterdayFromPreviousEvent:(id)a0 percentDuration:(float)a1;
- (id)_interpolatedDateFromEvent:(id)a0 toEvent:(id)a1 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTimelinePosition:(float)a3;

@end
