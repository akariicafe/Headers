@class NSArray, NSProgress, NSDictionary, NUColorSpace, NUCGAffineTransform;

@interface NUVideoExportRequest : NUExportRequest

@property (retain) NSProgress *progress;
@property (nonatomic) BOOL requiresVideoComposition;
@property (copy) NSDictionary *outputSettings;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (copy) NSArray *metadata;
@property (nonatomic) double bitRateMultiplicationFactor;
@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition;
@property (nonatomic) BOOL requireHardwareEncoder;
@property (retain) NUCGAffineTransform *preferredTransform;
@property (nonatomic) BOOL includeCinematicVideoTracks;

- (id)initWithComposition:(id)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (void)submitWithProgress:(id)a0 completion:(id /* block */)a1;

@end
