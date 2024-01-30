@class UIImage;

@interface SeymourUI.ArtworkView : SeymourUI.NoIntrinsicImageView {
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ completedIconView;
    void /* unknown type, empty encoding */ flipsContentForRightToLeftDirection;
    void /* unknown type, empty encoding */ iconConstraints;
    void /* unknown type, empty encoding */ layoutHandler;
    void /* unknown type, empty encoding */ recencyIconView;
    void /* unknown type, empty encoding */ shelfArtworkIconSafeAreaInsets;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ style;
}

@property (nonatomic, retain) UIImage *image;

- (void)layoutSubviews;
- (id)initWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
