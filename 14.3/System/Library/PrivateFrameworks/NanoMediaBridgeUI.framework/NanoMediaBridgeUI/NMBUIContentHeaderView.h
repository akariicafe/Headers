@class UILabel, UIStackView, UIProgressView;

@interface NMBUIContentHeaderView : UIView {
    UIStackView *_contentStackView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIProgressView *_progressView;
}

@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic) UIProgressView *progressView;

- (void).cxx_destruct;
- (id)_contentStackView;

@end
