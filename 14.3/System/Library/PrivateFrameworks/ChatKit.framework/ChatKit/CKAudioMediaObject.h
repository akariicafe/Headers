@class NSArray;

@interface CKAudioMediaObject : CKAVMediaObject

@property (retain, nonatomic) NSArray *powerLevels;

+ (id)fallbackFilenamePrefix;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
+ (id)_cachedPowerLevelsForKey:(id)a0;
+ (void)_cachePowerLevels:(id)a0 forKey:(id)a1;
+ (id)generateThumbnailForWidth:(double)a0 color:(id)a1 powerLevels:(id)a2 fileURL:(id)a3;
+ (Class)__ck_attachmentItemClass;
+ (id)UTITypes;

- (void)export:(id)a0;
- (id)powerLevels;
- (void)setPowerLevels:(id)a0;
- (int)mediaType;
- (id)waveformForWidth:(double)a0 orientation:(char)a1;
- (id)previewFilenameExtension;
- (id)savedPreviewFromURL:(id)a0 forOrientation:(char)a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (Class)coloredBalloonViewClass;
- (BOOL)isLikeAudioMessage;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (void)savePreview:(id)a0 toURL:(id)a1 forOrientation:(char)a2;
- (id)generatePlaceholderThumbnailForWidth:(double)a0;
- (id)composeWaveformForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (BOOL)canExport;
- (BOOL)shouldBeQuickLooked;
- (id)previewItemTitle;
- (id)attachmentSummary:(unsigned long long)a0;

@end
