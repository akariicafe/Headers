@class NSString;

@interface AVTStickerImageEncoder : NSObject <AVTClippableImageEncoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fileExtension;
- (id)dataFromImage:(id)a0;
- (id)dataFromImage:(id)a0 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)imageFromData:(id)a0 error:(id *)a1;
- (id)imageFromURL:(id)a0 error:(id *)a1;

@end
