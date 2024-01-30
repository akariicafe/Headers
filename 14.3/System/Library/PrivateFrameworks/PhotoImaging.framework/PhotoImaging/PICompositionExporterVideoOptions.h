@class NSString;

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions

@property (copy) id /* block */ metadataProcessor;
@property (nonatomic) BOOL increaseBitRateIfNecessary;
@property (copy, nonatomic) NSString *videoCodecType;
@property (nonatomic) BOOL preserveSourceColorSpace;
@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition;
@property (nonatomic) BOOL applyVideoOrientationAsMetadata;
@property (nonatomic) BOOL requireHardwareEncoder;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
