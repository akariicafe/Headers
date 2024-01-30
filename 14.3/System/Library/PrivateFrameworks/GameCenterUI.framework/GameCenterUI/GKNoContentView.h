@class UIStackView, NSString, UIActivityIndicatorView, GKUIContentUnavailableView;

@interface GKNoContentView : UIView

@property (retain, nonatomic) GKUIContentUnavailableView *contentUnavailableView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (retain, nonatomic) UIStackView *stackView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic, getter=isLoading) BOOL loading;

- (void)setMessage:(id)a0;
- (id)buttonTitle;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)message;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setButtonTitle:(id)a0;
- (id)title;

@end
