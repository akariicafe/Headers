@class NSArray, NSString, NSURL, AVMomentCaptureMovieRecordingResolvedSettings;

@interface AVMomentCaptureMovie : NSObject {
    NSString *_overCaptureGroupIdentifier;
    BOOL _hasOverCapture;
}

@property (readonly, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings;
@property (readonly, nonatomic) NSURL *outputFileURL;
@property (readonly, nonatomic) NSURL *debugMetadataSidecarFileURL;
@property (readonly, nonatomic) struct __CVBuffer { } *previewPixelBuffer;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) NSArray *movieMetadata;

+ (id)movieWithResolvedSettings:(id)a0 outputFileURL:(id)a1 movieMetadata:(id)a2;

- (void)dealloc;
- (id)description;
- (id)_initWithResolvedSettings:(id)a0 outputFileURL:(id)a1 movieMetadata:(id)a2;
- (void)_setPreviewPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)_setDebugMetadataSidecarFileURL:(id)a0;
- (id)debugDescription;
- (void)_setDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
