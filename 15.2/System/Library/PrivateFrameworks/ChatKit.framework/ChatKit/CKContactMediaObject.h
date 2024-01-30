@class NSDictionary, CNContactVCardSummary, UIImage;

@interface CKContactMediaObject : CKCardMediaObject

@property (retain, nonatomic) NSDictionary *contactMediaInfo;
@property (nonatomic) unsigned long long oopPreviewRequestCount;
@property (retain, nonatomic) CNContactVCardSummary *vCardSummary;
@property (nonatomic) BOOL vCardParsingFailed;
@property (retain, nonatomic) UIImage *vCardImage;

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;

- (Class)balloonViewClass;
- (struct CGSize { double x0; double x1; })bbSize;
- (int)mediaType;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)title;
- (BOOL)generatePreviewOutOfProcess;
- (id)icon;
- (id)attachmentSummary:(unsigned long long)a0;
- (id)subtitle;
- (void).cxx_destruct;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (BOOL)supportsBlastDoor;
- (id)vCardImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (id)previewCacheKey;
- (id)previewDispatchCache;
- (id)_transcodeControllerSharedInstance;
- (id)metricsCollectorMediaType;
- (id)contactCardPayloadFileURL:(id)a0;
- (void)generateOOPPreview;
- (Class)previewBalloonViewClass;
- (Class)placeholderBalloonViewClass;

@end
