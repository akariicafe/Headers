@class UILabel, UIButton;
@protocol DOCViewServiceErrorViewDelegate;

@interface DOCViewServiceErrorView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *tryAgainButton;
@property (weak) id<DOCViewServiceErrorViewDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)didTapTryAgain;

@end
