@class NSURL;

@interface CKAnimatedImageAttachmentItem : CKImageAttachmentItem

@property (retain, nonatomic) NSURL *animatedPreviewURL;
@property struct CGSize { double width; double height; } imageSize;

+ (id)UTITypes;
+ (BOOL)shouldScaleUpPreview;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (void)generatePreviewWithCompletion:(id /* block */)a0;
- (id)animatedPreviewURL:(BOOL)a0;
- (id)_savedPreviewFromURL:(id)a0;
- (id)_newImageData;
- (id)thumbnailAtIndex:(unsigned long long)a0 forWidth:(double)a1 withImageData:(id)a2;
- (id)generatePreviewFromThumbnail:(id)a0 width:(double)a1;

@end
