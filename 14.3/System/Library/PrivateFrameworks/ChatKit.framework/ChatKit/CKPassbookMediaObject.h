@class PKPass, UIImage;

@interface CKPassbookMediaObject : CKMediaObject

@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) UIImage *icon;

+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (id)UTITypes;

- (int)mediaType;
- (void).cxx_destruct;
- (Class)balloonViewClassForWidth:(double)a0 orientation:(char)a1;
- (id)passView;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)subtitle;
- (BOOL)shouldShowDisclosure;
- (BOOL)shouldShowViewer;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (BOOL)_supportsPassbook;
- (BOOL)shouldBeQuickLooked;
- (id)initWithTransfer:(id)a0 isFromMe:(BOOL)a1 suppressPreview:(BOOL)a2 forceInlinePreview:(BOOL)a3;
- (id)title;
- (id)previewItemTitle;
- (id)attachmentSummary:(unsigned long long)a0;

@end
