@class PKPass;

@interface CKPassbookMediaObject : CKMediaObject

@property (retain, nonatomic) PKPass *pass;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;

- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (int)mediaType;
- (id)previewItemTitle;
- (id)attachmentSummary:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)shouldBeQuickLooked;
- (BOOL)shouldShowViewer;
- (BOOL)shouldShowDisclosure;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (Class)previewBalloonViewClass;

@end
