@class AVAssetReaderTrackOutput, AVAsset, AVAssetTrack, AVAssetReader, NSError, NSString;

@interface JFXAVMediaDataReader : NSObject <JFXMediaDataReader>

@property (nonatomic) long long status;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AVAssetTrack *assetTrack;
@property (retain, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumFrameDuration;
@property (nonatomic) unsigned long long signPostID;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } readableTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } currentReadingRange;
@property (nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didFailWithError:(id)a0;
- (BOOL)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)beginReadingAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)beginReading;
- (id)createAssetReaderTrackOutput;
- (void)didUpdateReadingRange;
- (BOOL)readAheadToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)readAndDiscardRemainingAvailableData;
- (BOOL)hasRemainingAvailableData;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTimeOfCurrentData;
- (id)initWithAVAssetTrack:(id)a0 withName:(id)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })JFX_allMediaTimeRange;
- (BOOL)JFX_resetReaderFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)beginReadingAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)createAssetReader;
- (void)JFX_configureAssetReaderToReadFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)JFX_configureAssetReaderTrackOutput;
- (BOOL)prepareAssetReaderForReading;
- (void)JFX_resetReaderIfNecessaryToSeekFromStartTimeOfCurrentData:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)JFX_shouldResetReaderWhenSeekingFromStartTimeOfCurrentData:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)JFX_resetReadingRangeWhenScrubbingToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)seekingAheadIsExpensiveFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)cancelReadingForReaderReset;
- (void)JFX_releaseReadersForReset;

@end
