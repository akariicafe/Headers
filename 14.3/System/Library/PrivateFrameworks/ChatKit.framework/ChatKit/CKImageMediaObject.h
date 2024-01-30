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
@property (readonly, nonatomic) BOOL isIrisAsset;
@property (readonly, nonatomic) PHLivePhoto *livePhoto;

+ (id)fallbackFilenamePrefix;
+ (BOOL)isPreviewable;
+ (Class)imageDataClass;
+ (Class)__ck_attachmentItemClass;
+ (id)UTITypes;

- (void)export:(id)a0;
- (int)mediaType;
- (struct CGSize { double x0; double x1; })bbSize;
- (void).cxx_destruct;
- (id)pasteboardItemProvider;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)validatePreviewFormat;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)getIrisVideoPath;
- (id)location;
- (id)metricsCollectorMediaType;
- (struct CGSize { double x0; double x1; })originalSize;
- (BOOL)canShareItem;
- (BOOL)canExport;
- (id)calculateIrisVideoPath;
- (id)initWithTransfer:(id)a0 isFromMe:(BOOL)a1 suppressPreview:(BOOL)a2 forceInlinePreview:(BOOL)a3;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)attachmentSummary:(unsigned long long)a0;

@end
