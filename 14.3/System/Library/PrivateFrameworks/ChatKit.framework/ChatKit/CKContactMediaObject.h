@class NSDictionary, CNContactVCardSummary, UIImage;

@interface CKContactMediaObject : CKCardMediaObject

@property (retain, nonatomic) NSDictionary *contactMediaInfo;
@property (nonatomic) unsigned long long oopPreviewRequestCount;
@property (retain, nonatomic) CNContactVCardSummary *vCardSummary;
@property (nonatomic) BOOL vCardParsingFailed;
@property (retain, nonatomic) UIImage *vCardImage;

+ (id)fallbackFilenamePrefix;
+ (BOOL)shouldUseTranscoderGeneratedPreviewSize;
+ (id)UTITypes;

- (int)mediaType;
- (struct CGSize { double x0; double x1; })bbSize;
- (void).cxx_destruct;
- (id)icon;
- (BOOL)generatePreviewOutOfProcess;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)subtitle;
- (BOOL)supportsBlastDoor;
- (id)vCardImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (id)previewCacheKey;
- (id)previewDispatchCache;
- (id)_transcodeControllerSharedInstance;
- (id)contactCardPayloadFileURL:(id)a0;
- (void)generateOOPPreview;
- (Class)previewBalloonViewClass;
- (Class)coloredBalloonViewClass;
- (id)metricsCollectorMediaType;
- (id)title;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)attachmentSummary:(unsigned long long)a0;

@end
