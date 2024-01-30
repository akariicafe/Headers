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
@property BOOL didCheckForVideoWithFormatEligibleForTranscoding;
@property long long locationMetadataStatus;
@property long long captionMetadataStatus;
@property long long accessibilityDescriptionMetadataStatus;
@property (retain) id transcodingEligibleVideoTrackFormatDescription;
@property (copy) NSString *renderOriginatingSignature;

+ (id)imageSourceForFileURL:(id)a0;
+ (id)videoSourceForFileURL:(id)a0;
+ (id)imageSourceForFileURL:(id)a0 dimensions:(struct CGSize { double x0; double x1; })a1;
+ (id)sourceForFileURL:(id)a0;
+ (id)sourceForFileURL:(id)a0 mediaType:(long long)a1 imageDimensions:(struct CGSize { double x0; double x1; })a2;

- (BOOL)isHDR;
- (void).cxx_destruct;
- (void)markLivePhotoPairingIdentifierAsCheckedWithValue:(id)a0;
- (void)markContainsVideoEligibleForTranscodingAsCheckedWithValue:(BOOL)a0 codec:(unsigned int)a1;
- (BOOL)preflightWithError:(id *)a0;
- (void)checkForAccessibilityDescriptionData;
- (void)checkForCaptionData;
- (void)checkForHEIFImage;
- (void)checkForLivePhotoPairingIdentifier;
- (void)checkForLocationData;
- (void)checkForVideoEligibleForTranscoding;
- (BOOL)determineMediaTypeFromPathExtensionWithError:(id *)a0;
- (long long)imageSourceAccessibilityDescriptionMetadataStatus;
- (long long)imageSourceCaptionMetadataStatus;
- (long long)imageSourceLocationMetadataStatus;
- (BOOL)imageSourceMetadataByTraversingKeys:(id)a0 metadataValue:(id *)a1;
- (void)markAccessibilityDescriptionMetadataAsCheckedWithStatus:(long long)a0;
- (void)markCaptionMetadataAsCheckedWithStatus:(long long)a0;
- (void)markLocationMetadataAsCheckedWithStatus:(long long)a0;
- (BOOL)valueExistsInDictionary:(id)a0 byTraversingKeys:(id)a1 value:(id *)a2;
- (long long)videoSourceAccessibilityDescriptionMetadataStatus;
- (long long)videoSourceCaptionMetadataStatus;
- (long long)videoSourceLocationMetadataStatus;

@end
