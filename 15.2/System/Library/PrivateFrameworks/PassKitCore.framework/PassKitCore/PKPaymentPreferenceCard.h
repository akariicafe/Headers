@interface PKPaymentPreferenceCard : PKPaymentPreference

@property (nonatomic) BOOL supportsNullSelection;

- (void)setErrors:(id)a0 forPreference:(id)a1;
- (id)initWithTitle:(id)a0 preferences:(id)a1 selectedIndex:(unsigned long long)a2 readOnly:(BOOL)a3;
- (id)errorsForPreference:(id)a0;
- (BOOL)supportsDeletion;

@end
