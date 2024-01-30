@class AVMomentCaptureMovie, AVMomentCaptureSettings, AVMomentCaptureMovieRecordingResolvedSettings, AVMomentCaptureMovieRecordingSettings, AVWeakReferencingDelegateStorage;

@interface AVMomentCaptureMovieRequest : NSObject {
    AVMomentCaptureMovieRecordingResolvedSettings *_resolvedSettings;
    AVMomentCaptureMovie *movie;
    AVMomentCaptureMovie *spatialOverCaptureMovie;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (readonly) AVMomentCaptureSettings *momentCaptureSettings;
@property (readonly) AVMomentCaptureMovieRecordingSettings *unresolvedSettings;
@property (retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (readonly, nonatomic) unsigned long long expectedMovieCount;
@property (nonatomic) unsigned int firedCallbackFlags;
@property (retain, nonatomic) AVMomentCaptureMovie *movie;
@property (retain, nonatomic) AVMomentCaptureMovie *spatialOverCaptureMovie;

+ (id)requestWithDelegate:(id)a0 movieRecordingSettings:(id)a1 momentSettings:(id)a2;

- (void)dealloc;
- (id)_initWithDelegate:(id)a0 movieRecordingSettings:(id)a1 momentSettings:(id)a2;

@end
