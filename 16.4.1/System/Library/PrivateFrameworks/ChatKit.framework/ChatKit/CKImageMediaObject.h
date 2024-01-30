@class NSString, CKImageData, UIImage, NSURL, PHLivePhoto;

@interface CKImageMediaObject : CKMediaObject {
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
    NSURL *_appendedBundleURL;
    struct CGSize { double width; double height; } _originalSize;
    NSString *_irisVideoPath;
}

@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, nonatomic) CKImageData *imageData;
@property (retain, nonatomic) UIImage *thumbnail;
@property (readonly, nonatomic, getter=isScreenshot) BOOL screenshot;
@property (readonly, nonatomic) BOOL isIrisAsset;
@property (readonly, nonatomic) PHLivePhoto *livePhoto;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (BOOL)isPreviewable;

- (int)mediaType;
- (struct CGSize { double x0; double x1; })originalSize;
- (void).cxx_destruct;
- (id)location;
- (BOOL)canExport;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)attachmentSummary:(unsigned long long)a0;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })bbSize;
- (id)calculateIrisVideoPath;
- (BOOL)canShareItem;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1 orientation:(char)a2;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)getIrisVideoPath;
- (id)initWithTransfer:(id)a0 context:(id)a1 forceInlinePreview:(BOOL)a2;
- (BOOL)isPhotosCompatible;
- (void)legacyExport;
- (id)metricsCollectorMediaType;
- (id)pasteboardItemProvider;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)supportsUnknownSenderPreview;
- (BOOL)validatePreviewFormat;

@end
