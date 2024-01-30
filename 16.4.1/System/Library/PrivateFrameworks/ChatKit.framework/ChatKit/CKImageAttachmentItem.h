@interface CKImageAttachmentItem : CKAttachmentItem

@property struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL backgroundEnqueued;
@property (nonatomic) BOOL useDefaultSize;

+ (id)UTITypes;

- (id)imageData;
- (struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })_calculateImageSize;
- (id)_newImageData;
- (void)generatePreviewWithCompletion:(id /* block */)a0;
- (void)startDeferredSetup;

@end
