@class SLURLPreviewGenerator, UIImageView, UIImage, UIView;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)setImage:(id)a0;
- (BOOL)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;
- (void)_generateAutomaticPreviewForURL:(id)a0;

@end
