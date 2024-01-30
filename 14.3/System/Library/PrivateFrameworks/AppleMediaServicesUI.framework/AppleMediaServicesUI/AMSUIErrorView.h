@class _UIContentUnavailableView, NSString;

@interface AMSUIErrorView : AMSUICommonView

@property (retain, nonatomic) _UIContentUnavailableView *backingView;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1;
- (void)_handleButtonTap;

@end
