@class UILabel;

@interface MCCertificatePickerCell : PSTableCell {
    UILabel *_issuedByLabel;
    UILabel *_issuerLabel;
    UILabel *_expiresByLabel;
    UILabel *_expiryDateLabel;
}

+ (id)_dateFormatter;
+ (float)defaultCellHeight;
+ (id)_attributeFont;
+ (float)_attributeLabelSpace;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setExpirationDate:(id)a0;
- (void)setChecked:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_labelColor;
- (void)setIssuer:(id)a0;
- (id)_checkmarkView;
- (id)_attributeLabelCopy;

@end
