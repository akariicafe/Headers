@class PKPaymentPreferenceCard, PKPaymentPass;

@interface PKPaymentPreferenceCardOptionListItem : PKPaymentPreferenceOptionListItem

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentPreferenceCard *cardSectionPreference;

- (id)_text;
- (id)_image;
- (id)_secondaryText;
- (id)_censoredPANTextForPass:(id)a0;

@end
