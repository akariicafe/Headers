@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CertInfoGradientLabel *_trustedLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (double)rowHeight;
- (id)_titleLabel;
- (void)setExpired:(BOOL)a0;
- (void)layoutSubviews;
- (id)_subtitleLabel;
- (void).cxx_destruct;
- (id)_certificateImage;
- (id)_notTrustedGradient;
- (id)_trustedLabel;
- (void)setTrustSubtitle:(id)a0;
- (void)setTrustTitle:(id)a0;

@end
