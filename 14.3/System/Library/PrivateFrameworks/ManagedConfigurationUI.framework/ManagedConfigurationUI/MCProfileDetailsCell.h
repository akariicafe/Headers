@interface MCProfileDetailsCell : MCProfileInfoCell

@property (nonatomic) unsigned long long cellStyle;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setPayloadInfo:(id)a0;
- (void)prepareForReuse;
- (void)setCertificate:(struct __SecCertificate { } *)a0;
- (void)setPayload:(id)a0;
- (id)_detailImage;
- (void)setManagedApp:(id)a0;
- (void)setManagedBook:(id)a0;
- (BOOL)_containsTitleLabelOnly;
- (void)_setTitle:(id)a0 subtitle1:(id)a1 subtitle2:(id)a2 nearExpiration:(BOOL)a3;
- (id)_combineSubtitleAndApplyAttributeWithSubtitle1:(id)a0 subtitle2:(id)a1 font:(id)a2 defaultColor:(id)a3 expirationColor:(id)a4 nearExpiration:(BOOL)a5;
- (id)_attributedTextForSolitaryTitleLabel:(id)a0 defaultColor:(id)a1;
- (void)_setTitle:(id)a0 subtitle1:(id)a1 subtitle2:(id)a2;
- (id)_imageForApplicationIdentifier:(id)a0;
- (id)_textForLabel:(id)a0 value:(id)a1;
- (void)_setPayloadInfo:(id)a0;
- (void)setUnmanagedEnterpriseApp:(id)a0;

@end
