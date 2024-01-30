@class PKStackedTextItem, UIFont, NSMutableSet, UILabel;

@interface PKStackedTextItemView : UIView {
    UILabel *_title;
    UILabel *_primary;
    UILabel *_secondary;
    UILabel *_tertiary;
    struct CGSize { double width; double height; } _boundsSize;
    NSMutableSet *_snapshots;
    UIFont *_significantPrimaryFont;
    UIFont *_primaryFont;
    UIFont *_layoutPrimaryFont;
    UIFont *_idealTitleFont;
    UIFont *_idealPrimaryFont;
    UIFont *_idealSecondaryFont;
    UIFont *_idealTertiaryFont;
    BOOL _animated;
}

@property (readonly, nonatomic) long long style;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) PKStackedTextItem *content;
@property (nonatomic) struct { struct CGSize { double width; double height; } boundingSize; struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame; BOOL widthConstrained; } textMetrics[4]; } contentConstraints;

- (id)initWithStyle:(long long)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (double)headerPadding;
- (void)setContent:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateAlignmentAnimated:(BOOL)a0;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; BOOL x6; double x7; double x8; BOOL x9; double x10; double x11; })_titleFontMetrics;
- (id)_attributedStringWithText:(id)a0 strikethrough:(BOOL)a1;
- (double)_prepareViewForReuse:(id)a0;
- (void)setTextAlignment:(long long)a0 animated:(BOOL)a1;
- (void)_updateSubviewsAnimated:(BOOL)a0;
- (struct { struct CGSize { double x0; double x1; } x0; struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; BOOL x1; } x1[4]; })boundingMetricForWidth:(double)a0;

@end
