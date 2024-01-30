@class HUClipScrubberSelectionView, NSDate, NSArray, NSString, HFCameraPlaybackEngine, HUClipScrubberTimeController, UICollectionView, NSMutableArray;
@protocol HFCameraRecordingEvent;

@interface HUClipScrubberDataSource : NSObject <HFCameraPlaybackEngineObserver, UICollectionViewDataSource>

@property (retain, nonatomic) HUClipScrubberTimeController *timeController;
@property (nonatomic) double startingPinchDeltaX;
@property (retain, nonatomic) HUClipScrubberSelectionView *selectionView;
@property (nonatomic) double lastGestureScale;
@property (retain, nonatomic) NSMutableArray *clipEvents;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSArray *currentEvents;
@property (weak, nonatomic) id<HFCameraRecordingEvent> currentEvent;
@property (weak, nonatomic) UICollectionView *clipCollectionView;
@property (nonatomic) unsigned long long currentTimelineState;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic) NSDate *currentDate;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) unsigned long long mostRecentClipIndex;
@property (nonatomic) long long lastSelectedClipIndex;
@property (nonatomic) BOOL selectionViewHidden;
@property (nonatomic) double posterFrameWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void).cxx_destruct;
- (void)playbackEngine:(id)a0 didUpdateEvents:(id)a1;
- (void)playbackEngine:(id)a0 didRemoveEvents:(id)a1;
- (void)reloadEvents:(id)a0;
- (void)updateMostRecentClipIndex;
- (void)reloadClipEvents;
- (void)_updateClipCollectionView;
- (void)updateSelectionViewIfNeeded;
- (id)eventForSection:(unsigned long long)a0;
- (id)_reachabilitySectionCellForCollectionView:(id)a0 forEvent:(id)a1 atIndexPath:(id)a2;
- (id)_recordingSectionCellForCollectionView:(id)a0 forEvent:(id)a1 atIndexPath:(id)a2;
- (BOOL)isSpacerAtIndexPath:(id)a0;
- (id)_spacerCellForCollectionView:(id)a0 forEvent:(id)a1 atIndexPath:(id)a2;
- (id)previousEventForSection:(unsigned long long)a0;
- (BOOL)_isZoomingIn:(double)a0;
- (id)selectedDateFromCell:(id)a0 atCurrentOffset:(double)a1;
- (id)_indexPathsForClip:(id)a0;
- (BOOL)isValidEventAtIndexPath:(id)a0;
- (void)toggleSelectionStateForItemAtIndexPath:(id)a0;
- (void)updateToClipAtIndexPath:(id)a0;
- (id)startDateFromCell:(id)a0;
- (void)beginTimeScaleTrackingForPinchGesture:(id)a0;
- (void)changeTimeScaleForPinchGesture:(id)a0;
- (double)offsetForEvent:(id)a0;
- (BOOL)_doesReachabilitySectionPrecedeSection:(unsigned long long)a0;
- (BOOL)isValidRecordingEventAtIndexPath:(id)a0;
- (id)indexPathForEvent:(id)a0;
- (id)selectedDateFromCell:(id)a0 atOffset:(double)a1;
- (double)scrubbingResolutionForClip:(id)a0;

@end
