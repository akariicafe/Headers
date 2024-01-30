@class NSString;

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions

@property (copy) id /* block */ metadataProcessor;
@property (nonatomic) BOOL increaseBitRateIfNecessary;
@property (copy, nonatomic) NSString *videoCodecType;
@property (nonatomic) BOOL preserveSourceColorSpace;
@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition;
@property (nonatomic) BOOL applyVideoOrientationAsMetadata;
@property (nonatomic) BOOL requireHardwareEncoder;
@property (nonatomic) BOOL includeCinematicVideoTracks;
@property (nonatomic) BOOL computeDigest;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
