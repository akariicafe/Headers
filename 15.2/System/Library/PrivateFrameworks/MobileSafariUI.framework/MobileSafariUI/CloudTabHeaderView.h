@class NSString, UIImageView, UILabel, UIView;

@interface CloudTabHeaderView : UIView {
    UILabel *_label;
    UIImageView *_icon;
    UIView *_separatorView;
    long long _style;
    double _bottomPadding;
    double _paddingBetweenIconAndLabel;
    double _leftEdgeInset;
}

@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } labelFrame;

+ (double)defaultHeightForStyle:(long long)a0;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })_iconSizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
