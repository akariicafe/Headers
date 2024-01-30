@class UIStackView, UIImageView, UILabel, NSLayoutConstraint, UIButton;
@protocol SFAccountManagerPlatterWithDeclineButtonCellDelegate;

@interface SFAccountManagerPlatterWithDeclineButtonCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIStackView *_labelStackView;
    UIButton *_declineButton;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
}

@property (weak, nonatomic) id<SFAccountManagerPlatterWithDeclineButtonCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_declineButtonPressed:(id)a0;
- (void)setImageViewDiameter:(unsigned long long)a0;
- (void)setTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;

@end
