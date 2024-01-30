@class KNRecordingMovieTrack, NSArray, KNRecordingSyncState, KNRecordingCorrectionHistory, NSDate;

@interface KNRecording : TSPObject

@property (readonly, nonatomic) NSArray *eventTracks;
@property (readonly, nonatomic) KNRecordingMovieTrack *movieTrack;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) KNRecordingSyncState *syncState;
@property (readonly, nonatomic, getter=isInSyncWithShow) BOOL inSyncWithShow;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) KNRecordingCorrectionHistory *correctionHistory;

+ (id)p_correctedNavigationEventsFromNavigationEventTrack:(id)a0;
+ (id)p_movieEventsDerivedFromNavigationEvents:(id)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)slideNodeWasAddedToDocument:(id)a0;
- (void)slideNodeWillBeRemovedFromDocument:(id)a0;
- (void)saveToArchive:(struct RecordingArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Reference *x5; struct Date *x6; struct RecordingSyncState *x7; struct RecordingCorrectionHistory *x8; double x9; int x10; } *)a0 archiver:(id)a1;
- (id)recordingByAddingMissingEventsForRadar49654305;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)a0 trimDuration:(out double *)a1;
- (id)initWithContext:(id)a0 eventTracks:(id)a1 movieTrack:(id)a2 duration:(double)a3 syncState:(id)a4 modificationDate:(id)a5 correctionHistory:(id)a6;
- (id)initWithContext:(id)a0 eventTracks:(id)a1 movieTrack:(id)a2 duration:(double)a3 modificationDate:(id)a4;
- (id)initWithContext:(id)a0 eventTracks:(id)a1 movieTrack:(id)a2 duration:(double)a3;
- (BOOL)isLocallyOutOfSyncWithShowUsingLocalOutOfSyncToken:(id)a0;
- (id)recordingByReplacingAfterTime:(double)a0 withRecording:(id)a1 trimmedMovieSegment:(id)a2;
- (id)recordingByMarkingAsOutOfSyncWithShow:(BOOL)a0 withLocalOutOfSyncToken:(id)a1 restoringModificationDate:(id)a2;

@end
