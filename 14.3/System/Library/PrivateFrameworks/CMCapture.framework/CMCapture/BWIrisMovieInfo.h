@class NSArray, NSString, NSURL, FigCaptureMovieFileRecordingSettings, BWStats;

@interface BWIrisMovieInfo : NSObject <NSCopying> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToVideoPrerollStartInMilliseconds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToVideoPrerollStopInMilliseconds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToAudioPrerollStartInMilliseconds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillTimeOffsetToAudioPrerollStopInMilliseconds;
}

@property (retain, nonatomic) NSURL *outputMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureOutputMovieURL;
@property (nonatomic, getter=isOriginalPhotoRecording) BOOL originalPhotoRecording;
@property (readonly, nonatomic) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageCaptureTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageCaptureHostTime;
@property (readonly, nonatomic) double stillImageCaptureAbsoluteStartTime;
@property (readonly, nonatomic) int stillImageCaptureType;
@property (nonatomic, getter=isMomentCaptureMovieRecording) BOOL momentCaptureMovieRecording;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } momentCaptureMovieRecordingMasterEndTime;
@property (nonatomic) struct CGSize { double width; double height; } nonDestructiveCropSize;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieEndTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieTrimStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } movieTrimEndTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } beginTrimMasterPTS;
@property (readonly, nonatomic) BOOL containsTrims;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } masterMovieStartTime;
@property (retain, nonatomic) NSURL *masterMovieURL;
@property (retain, nonatomic) NSURL *temporaryMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureMasterMovieURL;
@property (retain, nonatomic) NSURL *spatialOverCaptureTemporaryMovieURL;
@property (nonatomic) BOOL spatialOverCaptureExpected;
@property (nonatomic, getter=isFinalReferenceMovie) BOOL finalReferenceMovie;
@property (nonatomic) BOOL stillImageEncoderKeyFrameEmitted;
@property (nonatomic) BOOL stillImageVISKeyFrameTagged;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } audioOffset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToVideoPrerollStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToVideoPrerollStopTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToAudioPrerollStartTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTimeOffsetToAudioPrerollStopTime;
@property (nonatomic, getter=isFinalEnqueuedIrisRequest) BOOL finalEnqueuedIrisRequest;
@property (nonatomic) BOOL isOverlappingRequest;
@property (readonly, nonatomic) int numberOfRequestedVariants;
@property (nonatomic) unsigned int requestedSDOFVariants;
@property (copy, nonatomic) NSURL *temporaryURLForSDOFOriginalMovie;
@property (copy, nonatomic) NSURL *outputURLForSDOFOriginalMovie;
@property (copy, nonatomic) NSArray *movieLevelMetadataForSDOFOriginalMovie;
@property (nonatomic, getter=isVitalityScoreValid) BOOL vitalityScoreValid;
@property (nonatomic) float vitalityScore;
@property (nonatomic) unsigned int vitalityScoringVersion;
@property (readonly, nonatomic) NSString *livePhotoMetadataStillImageKeyFrameSettingsID;
@property (copy, nonatomic) BWStats *stagingNodeOverallVideoFrameReceptionStats;
@property (copy, nonatomic) BWStats *stagingNodeValveActiveVideoFrameReceptionStats;
@property (copy, nonatomic) BWStats *fileCoordinatorToWriterMovingWindowLatencyStats;

+ (id)emptyIrisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)a0;
+ (id)livePhotoMetadataStillImageKeyFrameSettingsIDForSettingsID:(long long)a0 isOriginalPhotoRecording:(BOOL)a1;
+ (id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)a0 stillImageCaptureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 stillImageCaptureHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 stillImageCaptureAbsoluteStartTime:(double)a3 stillImageCaptureType:(int)a4 originalPhotoRecording:(BOOL)a5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)setMomentCaptureRecordingStillImageCaptureHostTimeOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 stillImageCaptureTimeOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_initWithFigCaptureMovieFileRecordingSettings:(id)a0;
- (id)_initWithFigCaptureMovieFileRecordingSettings:(id)a0 stillImageCaptureTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 stillImageCaptureHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 stillImageCaptureAbsoluteStartTime:(double)a3 stillImageCaptureType:(int)a4 originalPhotoRecording:(BOOL)a5;
- (id)copyMovieInfosForRequestedSDOFVariants;
- (id)copySpatialOverCaptureVariant;

@end
