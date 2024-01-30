@class UIActivityIndicatorView;

@interface PKActivityTableCell : PKTableViewCell

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)pk_childrenForAppearance;

@end
