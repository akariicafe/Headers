@interface ComplicationDisplay.ApricotNamedImageView : UIView <CDComplicationImageView> {
    void /* unknown type, empty encoding */ maxSize;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ baseline;
    void /* unknown type, empty encoding */ monochromeFraction;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ imageProvider;
@property (nonatomic, retain) void /* unknown type, empty encoding */ color;
@property (nonatomic) void /* unknown type, empty encoding */ usesLegibility;
@property (nonatomic, retain) void /* unknown type, empty encoding */ overrideColor;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
