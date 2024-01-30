@class PKPass;

@interface CKPassbookMediaObject : CKMediaObject

@property (retain, nonatomic) PKPass *pass;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;

- (int)mediaType;
- (void).cxx_destruct;
- (id)previewItemTitle;
- (id)attachmentSummary:(unsigned long long)a0;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (Class)previewBalloonViewClass;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowDisclosure;
- (BOOL)shouldShowViewer;

@end
