@class UIImage, UILabel, CertInfoGradientLabel;

@interface CertInfoCertificateHeaderCell : UITableViewCell {
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    CertInfoGradientLabel *_trustedLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_titleLabel;
- (void)layoutSubviews;
- (double)rowHeight;
- (void).cxx_destruct;
- (id)_subtitleLabel;
- (void)setExpired:(BOOL)a0;
- (void)setTrustTitle:(id)a0;
- (void)setTrustSubtitle:(id)a0;
- (id)_certificateImage;
- (id)_trustedLabel;
- (id)_notTrustedGradient;

@end
