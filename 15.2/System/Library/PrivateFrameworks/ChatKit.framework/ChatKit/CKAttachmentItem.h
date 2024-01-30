@class NSURL, NSString, NSDate;

@interface CKAttachmentItem : NSObject <QLPreviewItem> {
    struct CGSize { double width; double height; } _size;
    NSURL *_appendedBundleURL;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *transferGUID;
@property (retain, nonatomic) NSDate *createdDate;
@property (retain, nonatomic) NSString *irisVideoPath;
@property (nonatomic) BOOL isIrisAsset;
@property (retain, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) BOOL isSticker;
@property (nonatomic) BOOL showDocumentIcon;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)pxWidth;
+ (id)UTITypes;
+ (id)previewSizingQueue;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)previewCache;

- (id)UTIType;
- (id)imageData;
- (id)uncachedPreviewURL;
- (id)_getIrisBundleLocation;
- (id)_getIrisBundleURL;
- (id)dragItem;
- (BOOL)canShareItem;
- (id)calculateIrisVideoPath;
- (void)_savePreview:(id)a0;
- (id)pasteboardItem;
- (void)startDeferredSetup;
- (id)fileIcon;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFileURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 transferGUID:(id)a2 guid:(id)a3 createdDate:(id)a4;
- (id)getIrisVideoPath;
- (id)previewURL:(BOOL)a0;
- (id)_savedPreviewFromURL:(id)a0;
- (id)cachedPreview;
- (void)generatePreviewWithCompletion:(id /* block */)a0;

@end
