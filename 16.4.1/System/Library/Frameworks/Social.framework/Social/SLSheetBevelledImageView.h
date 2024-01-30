@class UIImageView, UIView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

@property (nonatomic) BOOL needsURLPlaceholderImage;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)ensurePlaceholderPreviewImage;
- (BOOL)generatePreviewImageFromAttachments;

@end
