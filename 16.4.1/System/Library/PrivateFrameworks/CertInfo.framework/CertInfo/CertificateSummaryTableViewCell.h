@interface CertificateSummaryTableViewCell : CertUIItemSummaryCell

- (void)setCertificateName:(id)a0 issuer:(id)a1 isRoot:(BOOL)a2;
- (void)updateWithCertificateTrust:(struct __SecTrust { } *)a0;

@end
