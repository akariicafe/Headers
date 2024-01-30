@class NSString;

@interface PHMediaFormatConversionSource : PHMediaFormatConversionContent

@property (class, readonly) Class requestClass;

@property struct CGSize { double width; double height; } imageDimensions;
@property BOOL preflighted;
@property unsigned int firstVideoTrackCodec;
@property BOOL containsVideoWithFormatEligibleForTranscoding;
@property BOOL containsProResVideoWithFormatEligibleForTranscoding;
@property (readonly) BOOL containsHEVCVideo;
@property BOOL containsHEIFImage;
@property (retain, nonatomic) NSString *livePhotoPairingIdentifier;
@property BOOL didCheckForLivePhotoPairingIdentifier;
@property long long locationMetadataStatus;
@property long long captionMetadataStatus;
@property long long accessibilityDescriptionMetadataStatus;
@property (retain) id transcodingEligibleVideoTrackFormatDescription;
@property (copy) NSString *renderOriginatingSignature;

+ (id)videoSourceForFileURL:(id)a0;
+ (id)imageSourceForFileURL:(id)a0;
+ (id)imageSourceForFileURL:(id)a0 dimensions:(struct CGSize { double x0; double x1; })a1;
+ (id)sourceForFileURL:(id)a0 mediaType:(long long)a1 imageDimensions:(struct CGSize { double x0; double x1; })a2;
+ (id)sourceForFileURL:(id)a0;

- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isHDR;
- (BOOL)preflightWithError:(id *)a0;
- (BOOL)determineMediaTypeFromPathExtensionWithError:(id *)a0;
- (void)checkForVideoEligibleForTranscoding;
- (void)checkForHEIFImage;
- (void)checkForLivePhotoPairingIdentifier;
- (BOOL)imageSourceMetadataByTraversingKeys:(id)a0 metadataValue:(id *)a1;
- (BOOL)valueExistsInDictionary:(id)a0 byTraversingKeys:(id)a1 value:(id *)a2;
- (void)checkForLocationData;
- (long long)imageSourceLocationMetadataStatus;
- (long long)videoSourceLocationMetadataStatus;
- (void)markLocationMetadataAsCheckedWithStatus:(long long)a0;
- (void)checkForCaptionData;
- (long long)imageSourceCaptionMetadataStatus;
- (long long)videoSourceCaptionMetadataStatus;
- (void)markCaptionMetadataAsCheckedWithStatus:(long long)a0;
- (void)checkForAccessibilityDescriptionData;
- (long long)imageSourceAccessibilityDescriptionMetadataStatus;
- (long long)videoSourceAccessibilityDescriptionMetadataStatus;
- (void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:(long long)a0;

@end
