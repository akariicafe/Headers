@class NSString, UIImageView, NSNumberFormatter, UILabel, NSParagraphStyle;

@interface _SFSecurityRecommendationsDrillInTableViewCell : UITableViewCell {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_detailLabel;
    UIImageView *_badgeView;
    UIImageView *_checkmarkView;
    NSParagraphStyle *_labelParagraphStyle;
    NSNumberFormatter *_numberFormatter;
}

@property (copy, nonatomic) NSString *subtitleText;
@property (nonatomic) long long warningStyle;
@property (nonatomic) long long numberOfWarnings;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_commonInit;
- (void)_setDetailLabelText;
- (void)_updateDetailViewVisibilityForWarningStyle:(long long)a0;

@end
