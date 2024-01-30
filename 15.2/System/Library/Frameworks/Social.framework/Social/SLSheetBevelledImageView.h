@class UIImageView, UIView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

@property (nonatomic) BOOL needsURLPlaceholderImage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)setImage:(id)a0;
- (BOOL)generatePreviewImageFromAttachments;
- (void)ensurePlaceholderPreviewImage;

@end
