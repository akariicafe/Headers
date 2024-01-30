@interface CertificateSummaryTableViewCell : CertUIItemSummaryCell

- (void)updateWithCertificateTrust:(struct __SecTrust { } *)a0;
- (void)setCertificateName:(id)a0 issuer:(id)a1 isRoot:(BOOL)a2;

@end
