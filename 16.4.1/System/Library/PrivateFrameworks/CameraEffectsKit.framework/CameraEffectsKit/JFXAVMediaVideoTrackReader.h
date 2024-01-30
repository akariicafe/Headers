@class NSError, NSString, JFXAVMediaVideoTrackReaderSample;

@interface JFXAVMediaVideoTrackReader : JFXAVMediaDataReader <JFXMediaVideoTrackReader>

@property (retain, nonatomic) JFXAVMediaVideoTrackReaderSample *currentSample;
@property (retain, nonatomic) JFXAVMediaVideoTrackReaderSample *nextSample;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } readableTimeRange;
@property (nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long signPostID;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)JFX_preloadData;
- (void)JFX_updateCurrentSampleDurationIfNeeded;
- (id)createAssetReaderTrackOutput;
- (void)didUpdateReadingRange;
- (BOOL)hasRemainingAvailableData;
- (BOOL)readAheadToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)readAndDiscardRemainingAvailableData;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startTimeOfCurrentData;
- (id)videoSampleForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
