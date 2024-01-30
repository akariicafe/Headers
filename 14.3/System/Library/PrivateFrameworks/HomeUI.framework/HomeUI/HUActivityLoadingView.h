@class UIActivityIndicatorView, UILabel, UIStackView;

@interface HUActivityLoadingView : UIView

@property (readonly, nonatomic) UIStackView *titleSpinnerStackView;
@property (readonly, nonatomic) UIStackView *mainStackView;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;

+ (id)watchedKeyPaths;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 activityIndicatorStyle:(long long)a1;
- (void)_watchLabelsForContentAndResizeIfNecessary;

@end
