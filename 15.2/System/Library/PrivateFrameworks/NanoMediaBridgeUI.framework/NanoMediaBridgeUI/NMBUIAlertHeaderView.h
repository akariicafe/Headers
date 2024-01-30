@class UILabel, UIStackView, UIView;

@interface NMBUIAlertHeaderView : UIView {
    UIView *_backgroundView;
    UIStackView *_contentStackView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
}

@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;

- (id)_backgroundView;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (id)_contentStackView;

@end
