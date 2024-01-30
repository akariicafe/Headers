@class NSString, MKTransitSystemFilterView, UILabel;

@interface MKTransitSystemFilterHeaderFooterView : UITableViewHeaderFooterView {
    UILabel *_titleLabel;
}

@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) MKTransitSystemFilterView *filterView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupSubviews;

@end
