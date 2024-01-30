@interface PosterBoard.HomeScreenConfigurationControl : UIControl {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ showsSymbolWhenSelected;
    void /* unknown type, empty encoding */ maximumHorizontalTitleOutset;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ symbolImageView;
    void /* unknown type, empty encoding */ isEnabled;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ previewContentView;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;

- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
