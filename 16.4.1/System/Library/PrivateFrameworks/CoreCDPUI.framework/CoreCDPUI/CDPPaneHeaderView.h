@class UILabel, BFFPaneHeaderView, UIView;

@interface CDPPaneHeaderView : UIView {
    BFFPaneHeaderView *_header;
}

@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *subLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UIView *_header;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void)layoutSubviews;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (double)innerHeaderMaxY;
- (void)makeAllTheTextFits;

@end
