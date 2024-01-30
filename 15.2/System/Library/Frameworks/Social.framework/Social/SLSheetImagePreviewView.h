@class UIImage, UIImageView, NSArray;

@interface SLSheetImagePreviewView : UIView {
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSArray *principalAttachments;

+ (id)fallbackPreviewImage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;
- (void)setPreviewImage:(id)a0 forAttachment:(id)a1;

@end
