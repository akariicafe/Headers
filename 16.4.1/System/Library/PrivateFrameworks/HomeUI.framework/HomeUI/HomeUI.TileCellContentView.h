@class NSArray;

@interface HomeUI.TileCellContentView : UIView <NSObject> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ prefixLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ activeLayoutConstraints;
    void /* unknown type, empty encoding */ descriptionLabel;
    void /* unknown type, empty encoding */ badgeLabel;
    void /* unknown type, empty encoding */ activityIndicator;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ iconView;
@property (nonatomic, readonly) NSArray *standardLabels;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
