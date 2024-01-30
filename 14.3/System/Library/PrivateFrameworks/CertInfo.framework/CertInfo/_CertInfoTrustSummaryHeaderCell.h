@class NSString, UIImage, _CertInfoActionButton, UILabel, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _CertInfoActionButton *_actionButton;
    _CertInfoGradientLabel *_trustedLabel;
}

@property (readonly, weak, nonatomic) _CertInfoActionButton *actionButton;
@property (readonly, nonatomic) double rowHeight;
@property (copy, nonatomic) NSString *trustTitle;
@property (copy, nonatomic) NSString *trustSubtitle;
@property (nonatomic, getter=isTrusted) BOOL trusted;

- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)setExpired:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_trustedLabel;
- (void)setActionButtonTitle:(id)a0 destructive:(BOOL)a1 animated:(BOOL)a2;
- (void)_layoutSubviewsWithActionButtonSize:(struct CGSize { double x0; double x1; })a0;

@end
