@class UIColor, NSString, UIImageView, UIImage, UILabel, UIView, UIButton;

@interface OBBuddyPaneHeaderView : UIView {
    struct CGSize { double width; double height; } _iconSize;
    UIButton *_linkButton;
    id /* block */ _linkHandler;
    UIView *_bottomLine;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (retain, nonatomic) NSString *iconAccessibilityLabel;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UILabel *subLabel;
@property (nonatomic) double flexibleHeight;
@property (retain, nonatomic) UIColor *bottomLineColor;
@property (nonatomic) BOOL iconInheritsTint;
@property (nonatomic) BOOL useMinimumTopPadding;
@property (nonatomic) double customTopPadding;
@property (nonatomic, getter=isTextLabelAlignedByLastBaseline) BOOL textLabelAlignedByLastBaseline;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_linkButtonPressed;
- (double)_labelsAndLinksBaselineOffsetForView:(id)a0;
- (double)heightForWidth:(double)a0 inView:(id)a1;
- (void)setLinkText:(id)a0 handler:(id /* block */)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
