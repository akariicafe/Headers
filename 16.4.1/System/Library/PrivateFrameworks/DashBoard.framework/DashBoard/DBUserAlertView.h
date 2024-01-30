@class UILabel, UIStackView;

@interface DBUserAlertView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (readonly, nonatomic) id /* block */ dismissHandler;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)_buttonFont;
- (id)_buttonWithAlertAction:(id)a0;
- (id)initWithAlert:(id)a0 environmentConfiguration:(id)a1;

@end
