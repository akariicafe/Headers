@class NSString, UILabel, UIView;

@interface SKUIGroupedHeaderView : UIView {
    UILabel *_titleLabel;
    UIView *_topBorder;
    UIView *_botBorder;
}

@property (nonatomic) BOOL hasTopBorder;
@property (nonatomic) BOOL hasBottomBorder;
@property (copy, nonatomic) NSString *title;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
