@class UIActivityIndicatorView;

@interface HUSpinnerButtonCell : HUButtonCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) BOOL useFullWidthSeparator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (void)createSpinner;

@end
