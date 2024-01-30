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

- (id)_transcodeControllerSharedInstance;
- (id)icon;
- (id)subtitle;
- (int)mediaType;
- (id)title;
- (void).cxx_destruct;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)previewCacheKey;
- (id)attachmentSummary:(unsigned long long)a0;
- (Class)balloonViewClass;
- (struct CGSize { double x0; double x1; })bbSize;
- (id)contactCardPayloadFileURL:(id)a0;
- (void)generateOOPPreview;
- (BOOL)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (Class)placeholderBalloonViewClass;
- (Class)previewBalloonViewClass;
- (id)previewDispatchCache;
- (BOOL)supportsBlastDoor;
- (id)vCardImageOfSize:(struct CGSize { double x0; double x1; })a0;

@end
