@class NSString, UIImage;

@interface MFAttachmentImageGenerator : UIView {
    struct CGSize { double width; double height; } _textSize;
    NSString *_displayString;
    UIImage *_image;
    double _maxImageHeight;
}

+ (double)defaultHeight;
+ (id)imageForAttachment:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForAttachment:(id)a0;
+ (id)pngDataForAttachment:(id)a0;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)image;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRect;
- (id)pngData;

@end
