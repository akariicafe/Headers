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

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (BOOL)isPreviewable;
+ (Class)__ck_attachmentItemClass;

- (struct CGSize { double x0; double x1; })bbSize;
- (BOOL)canExport;
- (int)mediaType;
- (id)previewItemTitle;
- (id)previewItemURL;
- (BOOL)__im_ff_commSafetyUIEnabled;
- (BOOL)canShareItem;
- (struct CGSize { double x0; double x1; })originalSize;
- (BOOL)supportsUnknownSenderPreview;
- (id)calculateIrisVideoPath;
- (id)pasteboardItemProvider;
- (id)rtfDocumentItemsWithFormatString:(id)a0 selectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)validatePreviewFormat;
- (BOOL)isPhotosCompatible;
- (void)legacyExport;
- (id)attachmentSummary:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)bbPreviewFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)generateThumbnailForWidth:(double)a0 orientation:(char)a1;
- (id)getIrisVideoPath;
- (id)metricsCollectorMediaType;
- (id)location;
- (id)initWithTransfer:(id)a0 context:(id)a1 forceInlinePreview:(BOOL)a2;

@end
