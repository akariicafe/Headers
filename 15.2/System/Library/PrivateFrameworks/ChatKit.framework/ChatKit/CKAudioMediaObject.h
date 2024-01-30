@class NSArray, NSString;

@interface CKAudioMediaObject : CKAVMediaObject <CKMediaObjectMetadataPreview>

@property (retain, nonatomic) NSArray *powerLevelsFromMetadata;
@property (nonatomic) double durationFromMetadata;
@property (retain, nonatomic) NSArray *powerLevels;
@property (readonly, nonatomic) BOOL supportsPreviewMetadata;
@property (readonly, copy, nonatomic) NSString *previewMetadataFilenameExtension;

+ (id)_cachedPowerLevelsForKey:(id)a0;
+ (void)_cachePowerLevels:(id)a0 forKey:(id)a1;
+ (id)generateThumbnailForWidth:(double)a0 color:(id)a1 powerLevels:(id)a2 fileURL:(id)a3;
+ (id)generateThumbnailForPowerLevelsFromMetadata:(id)a0 color:(id)a1;
+ (id)generateWaveformFromPowerLevels:(double *)a0 powerLevelsCount:(unsigned long long)a1 color:(id)a2;
+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
+ (Class)__ck_attachmentItemClass;

- (Class)balloonViewClass;
- (BOOL)canExport;
- (int)mediaType;
- (BOOL)shouldSuppressPreview;
- (id)previewItemTitle;
- (BOOL)isLikeAudioMessage;
- (void)restorePreviewMetadataFromDict:(id)a0;
- (id)generateThumbnailForWidth:(double)a0;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (void)savePreview:(id)a0 toURL:(id)a1 forOrientation:(char)a2;
- (id)generatePlaceholderThumbnailForWidth:(double)a0;
- (id)previewMetadataWithContentsOfURL:(id)a0 error:(out id *)a1;
- (BOOL)writePreviewMetadata:(id)a0 toURL:(id)a1 error:(out id *)a2;
- (id)composeWaveformForWidth:(double)a0 orientation:(char)a1;
- (id)powerLevels;
- (id)attachmentSummary:(unsigned long long)a0;
- (void)setPowerLevels:(id)a0;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)isPreviewable;
- (id)waveformForOrientation:(char)a0;
- (id)previewFilenameExtension;
- (id)savedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)metricsCollectorMediaType;

@end
