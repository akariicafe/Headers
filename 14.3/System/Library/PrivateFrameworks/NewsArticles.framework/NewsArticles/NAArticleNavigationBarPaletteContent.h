@interface NAArticleNavigationBarPaletteContent : UIView <NUArticleMessaging, TUBarPaletteContents> {
    void /* unknown type, empty encoding */ fadingBar;
    void /* unknown type, empty encoding */ opaqueBar;
    void /* unknown type, empty encoding */ horizontalScrollOffset;
    void /* unknown type, empty encoding */ audioButtonLocation;
}

@property (class, nonatomic, readonly) double paletteHeight;

- (id)showMessage:(long long)a0;
- (void)compressWithScale:(double)a0 opacity:(double)a1;
- (double)paletteHeight;
- (void).cxx_destruct;
- (void)setBarColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHorizontalScrollOffset:(double)a0 audioButtonLocation:(double)a1;
- (void)setBarColorFor:(id)a0 primaryColor:(id)a1 secondaryColor:(id)a2 primaryVisibilityFactor:(double)a3;
- (id)setPaletteColorWithPrimaryColor:(id)a0 secondaryColor:(id)a1 primaryVisibilityFactor:(double)a2;

@end
