@class FigCaptureMovieFileRecordingSettings, BWIrisMovieInfo;

@interface BWPendingIrisRecordingRequest : NSObject <NSCopying>

@property (readonly, nonatomic) FigCaptureMovieFileRecordingSettings *settings;
@property (nonatomic) long long enqueuedHostTime;
@property (retain, nonatomic) BWIrisMovieInfo *irisMovieInfo;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } momentCaptureMovieRecordingMasterEndTime;
@property (nonatomic, getter=isPairedRequestCreated) BOOL pairedRequestCreated;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)irisRecordingRequestWithFigCaptureMovieFileRecordingSettings:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;

@end
