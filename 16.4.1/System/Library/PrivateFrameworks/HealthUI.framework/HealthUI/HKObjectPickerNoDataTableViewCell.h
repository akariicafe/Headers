@class UIStackView, NSString, UILabel, UIButton;

@interface HKObjectPickerNoDataTableViewCell : UITableViewCell

@property (class, readonly) NSString *defaultReuseIdentifier;

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSString *explanationText;
@property (nonatomic) BOOL showLearnMoreButton;
@property (retain, nonatomic) UIButton *learnMoreButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_setupSubviews;

@end
