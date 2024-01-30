@class UILabel, UIView;

@interface HKNumberedListItemView : UIView

@property (nonatomic) unsigned long long number;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIView *numberLabelBackground;

+ (id)numberFont;
+ (id)createNumberedViewWithInteger:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })listItemSize;

- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (void)_setUpConstraints;
- (void)layoutSubviews;
- (id)initWithInteger:(unsigned long long)a0;
- (void)_setUpUI;

@end
