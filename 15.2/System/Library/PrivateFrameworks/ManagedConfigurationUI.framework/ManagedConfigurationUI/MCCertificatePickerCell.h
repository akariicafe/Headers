@class UILabel;

@interface MCCertificatePickerCell : PSTableCell {
    UILabel *_issuedByLabel;
    UILabel *_issuerLabel;
    UILabel *_expiresByLabel;
    UILabel *_expiryDateLabel;
}

+ (float)defaultCellHeight;
+ (id)_dateFormatter;
+ (id)_attributeFont;
+ (float)_attributeLabelSpace;

- (void)layoutSubviews;
- (void)setChecked:(BOOL)a0;
- (id)_labelColor;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)_checkmarkView;
- (void)setExpirationDate:(id)a0;
- (void)setIssuer:(id)a0;
- (id)_attributeLabelCopy;

@end
