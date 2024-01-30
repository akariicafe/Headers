@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CertInfoGradientLabel *_trustedLabel;
}

- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)setExpired:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (double)rowHeight;
- (void)layoutSubviews;
- (id)_trustedLabel;
- (void)setTrustTitle:(id)a0;
- (void)setTrustSubtitle:(id)a0;
- (id)_certificateImage;
- (id)_notTrustedGradient;

@end
