@class UIStackView, NSString, UIImageView, UILabel, UIView;

@interface SFAccountDetailHeaderViewCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
    UIStackView *_labelStackView;
    UILabel *_domainLabel;
    UILabel *_lastModifiedDateLabel;
    NSString *_highLevelDomain;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (void)setMonogramBackgroundColor:(id)a0;
- (void)_hideMonogramIcon;
- (void)_showMonogramIconWithBackgroundColor:(id)a0;
- (void)setHighLevelDomain:(id)a0;
- (void)setLastModifiedDateString:(id)a0;

@end
