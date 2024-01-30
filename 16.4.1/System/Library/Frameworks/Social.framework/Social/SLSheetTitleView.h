@class NSString, UIImageView, UILabel, NSMutableArray;

@interface SLSheetTitleView : UIView {
    UIImageView *_serviceIconView;
    NSMutableArray *_constraints;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *title;

- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_setupTitleLabel;
- (void)setServiceIconImage:(id)a0;

@end
