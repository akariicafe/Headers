@class NSString;

@interface CKLocationMediaObject : CKContactMediaObject <MKAnnotation>

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (id)vcardDataFromCLLocation:(id)a0;
+ (id)placeholderPreviewCache;
+ (Class)__ck_attachmentItemClass;
+ (id)placeholderPreviewForWidth:(double)a0 orientation:(char)a1;
+ (id)UTITypes;

- (int)mediaType;
- (struct CGSize { double x0; double x1; })bbSize;
- (Class)balloonViewClassForWidth:(double)a0 orientation:(char)a1;
- (id)pasteboardItemProvider;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (Class)previewBalloonViewClass;
- (id)previewCacheKeyWithOrientation:(char)a0;
- (id)previewCachesFileURLWithOrientation:(char)a0 extension:(id)a1 generateIntermediaries:(BOOL)a2;
- (id)transcriptTraitCollection;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)metricsCollectorMediaType;
- (id)mapItem;
- (id)generatePlaceholderThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)generatePlaceholderThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithTransfer:(id)a0 isFromMe:(BOOL)a1 suppressPreview:(BOOL)a2 forceInlinePreview:(BOOL)a3;
- (id)vCardURLProperties;
- (BOOL)isDroppedPin;
- (id)previewItemTitle;
- (id)attachmentSummary:(unsigned long long)a0;

@end
