@class UIColor, NSAttributedString, UILabel;

@interface REUpNextHeaderView : UICollectionReusableView {
    UILabel *_label;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
