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
- (id)description;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 eventTracks:(id)a1 movieTrack:(id)a2 duration:(double)a3;
- (id)initWithContext:(id)a0 eventTracks:(id)a1 movieTrack:(id)a2 duration:(double)a3 modificationDate:(id)a4;
- (id)initWithContext:(id)a0 eventTracks:(id)a1 movieTrack:(id)a2 duration:(double)a3 syncState:(id)a4 modificationDate:(id)a5 correctionHistory:(id)a6;
- (BOOL)isLocallyOutOfSyncWithShowUsingLocalOutOfSyncToken:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)movieSegmentToTrimWhenReplacingAfterTime:(double)a0 trimDuration:(out double *)a1;
- (id)recordingByAddingMissingEventsForRadar49654305;
- (id)recordingByMarkingAsOutOfSyncWithShow:(BOOL)a0 withLocalOutOfSyncToken:(id)a1 restoringModificationDate:(id)a2;
- (id)recordingByReplacingAfterTime:(double)a0 withRecording:(id)a1 trimmedMovieSegment:(id)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)slideNodeWasAddedToDocument:(id)a0;
- (void)slideNodeWillBeRemovedFromDocument:(id)a0;

@end
