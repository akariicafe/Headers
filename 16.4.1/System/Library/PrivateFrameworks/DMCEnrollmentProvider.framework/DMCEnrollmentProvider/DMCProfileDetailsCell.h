@interface DMCProfileDetailsCell : UITableViewCell

+ (id)cellIdentifier;
+ (id)localizedExpirationLabelForExpiry:(id)a0;

- (void)setDetails:(id)a0;
- (id)_attributedSubtitleComboWithSubtitle1:(id)a0 subtitle2:(id)a1 nearExpiration:(BOOL)a2;
- (id)_attributes:(id)a0 modifiedWithAttributes:(id)a1;
- (id)_expirationSubtitleForExpiry:(id)a0 outNearExpiration:(BOOL *)a1;
- (id)_textForLabel:(id)a0 value:(id)a1;
- (id)_titleFromCertificate:(struct __SecCertificate { } *)a0 outSubtitle1:(id *)a1 outSubtitle2:(id *)a2 outNearExpiration:(BOOL *)a3;
- (id)_titleFromPayloadInfo:(id)a0 outSubtitle1:(id *)a1 outSubtitle2:(id *)a2 outNearExpiration:(BOOL *)a3;

@end
