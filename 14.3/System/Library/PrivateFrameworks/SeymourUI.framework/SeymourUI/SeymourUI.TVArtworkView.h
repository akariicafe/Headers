@class UIImage;

@interface SeymourUI.TVArtworkView : SMUTVStackedImageView {
    void /* unknown type, empty encoding */ completedIconView;
    void /* unknown type, empty encoding */ iconConstraints;
    void /* unknown type, empty encoding */ recencyIconView;
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ layoutHandler;
    void /* unknown type, empty encoding */ shelfArtworkIconSafeAreaInsets;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ stackedOverlayView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
