@class UIImageView, UILabel, UIView;

@interface SLSheetVideoPreviewView : SLSheetImagePreviewView {
    UIView *_infoBar;
    UIImageView *_videoGlyphView;
    UILabel *_durationLabel;
}

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setVideoDuration:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_applyConstraints;

@end
